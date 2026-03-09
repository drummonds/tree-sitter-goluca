# tree-sitter-goluca

Tree-sitter grammar for [Go-Luca](https://github.com/drummonds/go-luca) accounting files.

See 

## Usage

```sh
npm install
npx tree-sitter generate
npx tree-sitter test
```

## Format

```goluca
# Comment
2026-02-07 * Dividend payment
  Asset:Cash → Equity:Capital "Dividend" 200 GBP
  +Income:Salary → Expense:Tax "income tax" 1000 GBP
```

### Elements

| Element     | Pattern                       | Example                                   |
| ----------- | ----------------------------- | ----------------------------------------- |
| date        | `YYYY-MM-DD`                  | `2026-02-07`                              |
| flag        | `*` or `!`                    | `*`                                       |
| payee       | free text                     | `Dividend payment`                        |
| account     | `Type:Product[:ID[:Address]]` | `Liability:InterestAccount:0000-111:Main` |
| arrow       | `->` `//` `→` `>`             | `→`                                       |
| description | quoted string                 | `"Dividend"`                              |
| amount      | decimal                       | `1,000.00`                                |
| commodity   | uppercase (required)          | `GBP`                                     |
| linked      | `+` prefix                    | `+Income:Salary`                          |
| comment     | `#` or `;`                    | `# note`                                  |

## Links

| | |
|---|---|
| Documentation | https://h3-tree-sitter-goluca.statichost.page/ |
| Source (Codeberg) | https://codeberg.org/hum3/tree-sitter-goluca |
| Mirror (GitHub) | https://github.com/drummonds/tree-sitter-goluca |
| Docs repo | https://codeberg.org/hum3/tree-sitter-goluca-docs |
