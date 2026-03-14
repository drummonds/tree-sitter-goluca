# tree-sitter-goluca

Tree-sitter grammar for [Go-Luca](https://codeberg.org/hum3/go-luca) accounting files (`.goluca`).

Provides parsing, syntax highlighting, and editor integration for the Go-Luca
double-entry transaction format.

## Go-Luca format

Each transaction has a header line (date, flag, optional payee) followed by one
or more movement lines. Movements transfer an amount from one account to another.

```goluca
# Comment
2026-02-07 * Dividend payment
  Asset:Cash → Equity:Capital "Dividend" 200 GBP

2026-02-01 * Payroll
  +Income:Salary → Asset:Bank "net salary" 4,000.00 GBP
  +Income:Salary → Expense:Tax "income tax" 1,000.00 GBP

2026-03-01 ! Awaiting confirmation
  Asset:Bank → Expense:Food "lunch" 15.50 GBP
```

### Grammar elements

| Element     | Pattern                       | Example                                   |
| ----------- | ----------------------------- | ----------------------------------------- |
| date        | `YYYY-MM-DD`                  | `2026-02-07`                              |
| flag        | `*` (cleared) or `!` (pending) | `*`                                      |
| payee       | free text (optional)          | `Dividend payment`                        |
| account     | `Type:Name[:ID[:Address]]`    | `Liability:InterestAccount:0000-111:Main` |
| arrow       | `->` `//` `→` `>`             | `→`                                       |
| description | quoted string (optional)      | `"Dividend"`                              |
| amount      | decimal, commas allowed       | `1,000.00`                                |
| commodity   | uppercase letters (required)  | `GBP`                                     |
| linked      | `+` prefix on from-account   | `+Income:Salary`                          |
| comment     | `#` or `;` to end of line    | `# note`                                  |

### Linked movements

The `+` prefix marks movements that share the same source account within a
transaction, splitting a single source amount across multiple destinations
(e.g. payroll splitting gross salary into net pay and tax).

## Usage

```sh
npm install
npx tree-sitter generate
npx tree-sitter test
```

Or with Taskfile:

```sh
task check    # generate + test
```

## Editor integration

The grammar includes a `queries/highlights.scm` for syntax highlighting in
editors that support tree-sitter (Neovim, Helix, Zed, etc.).

## Documentation

```sh
task docs:build   # build HTML docs
tp pages          # local preview
tp pages deploy   # deploy to statichost
```

## Links

| | |
|---|---|
| Documentation | https://h3-tree-sitter-goluca.statichost.page/ |
| Source (Codeberg) | https://codeberg.org/hum3/tree-sitter-goluca |
| Mirror (GitHub) | https://github.com/drummonds/tree-sitter-goluca |
