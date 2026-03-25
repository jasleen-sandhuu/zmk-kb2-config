# Keyboard Keymap Guide

This document explains the layout, layers, and combos for this keyboard in a beginner-friendly way.

## How to Read This

- Tap a key to type the symbol shown.
- Hold a layer key to temporarily switch to that layer.
- Press `LCK` while on a layer to keep that layer active until you leave it.
- `SPC` means Space.
- `LCK` means Lock.
- `•` means there is no special key on that position for that layer.
- A **combo** means pressing two or more keys together.
- A **one-shot modifier** means you when you tap the modifier, it stays active for the next key you press.

## Position Map

This is the position naming used for combos.

```text
╭─────────────────────┬─────────────────────╮
│ --- LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 --- │
│ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
│ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
╰──────────────╮  LH0 │ RH0 ╭───────────────╯
               ╰──────┴─────╯
```

## Layer Overview

These are the layer keys on the main typing layer.

```text
╭─────────────────────┬─────────────────────╮
│ ---  •   •   •   •  │  •   •   •   •  --- │
│  •   •   •   •   •  │  •   •   •   •   •  │
│  •   •   •  NUM LCK │ LCK SYS  •   •   •  │
╰──────────────╮  NAV │ SYM ╭───────────────╯
               ╰──────┴─────╯
```

### How layer access works

- Hold `NUM` to use the Number layer.
- Hold `NAV` to use the Navigation layer.
- Hold `SYM` to use the Symbol layer.
- Hold `SYS` to use the System layer.
- While you are on one of those layers, press `LCK` to lock that layer on.

## Alpha Layer

This is the main typing layer.

```text
╭─────────────────────┬─────────────────────╮
│ ---  W   E   R   T  │  Y   U   I   O  --- │
│  A   S   D   F   G  │  H   J   K   L   '" │
│  Z   X   C   V   B  │  N   M   ,;  .:  ?! │
╰──────────────╮  SPC │ SPC ╭───────────────╯
               ╰──────┴─────╯
```

### Notes

- The punctuation keys have tap-and-hold variants:
  - tap `,` for comma, hold for semicolon `;`
  - tap `.` for period, hold for colon `:`
  - tap `?` for question mark, hold for exclamation mark `!`
  - tap `'` for single quote, hold for double quote `"`
- `F` and `J` are special home-row Shift keys.
- If you press `F` and then a letter on the right hand, that letter becomes uppercase.
- If you press `J` and then a letter on the left hand, that letter becomes uppercase.
- This makes it easier to type capital letters without reaching for a separate Shift key.

### Extra letters from combos

- Press `LT2 + LT3` together to type `Q`
- Press `RT2 + RT3` together to type `P`

## Number Layer

Use this layer for numbers, a few symbol pairs, and left-hand one-shot modifiers.

```text
╭─────────────────────┬─────────────────────╮
│ ---  •   •   •   •  │  +*  7   8   9  --- │
│ SFT CTL ALT GUI  •  │  -=  4   5   6   0  │
│  •   •   •   •  LCK │  ,/  1   2   3   .: │
╰──────────────╮  SPC │ SPC ╭───────────────╯
               ╰──────┴─────╯
```

### Notes

- The left-hand home row gives one-shot modifiers:
  - `SFT` = Shift
  - `CTL` = Control
  - `ALT` = Alt / Option
  - `GUI` = Command
- Example: hold `NUM` to reach the one-shot modifiers, tap `GUI`, release `NUM`, then tap `C` to copy on macOS.
- Press `LCK` to keep the Number layer active.
- Some symbol keys on this layer also have tap-and-hold variants:
  - `+*` = tap for `+`, hold for `*`
  - `-=` = tap for `-`, hold for `=`
  - `,/` = tap for `,`, hold for `/`
  - `.:` = tap for `.`, hold for `:`

## Navigation Layer

Use this layer for editing, cursor movement, and navigation shortcuts.

```text
╭─────────────────────┬─────────────────────╮
│ ---  •   •   •   •  │ ESC DEL ENT BSP --- │
│ SFT CTL ALT GUI  •  │ SPR JPR  ↑  JNX SNX │
│  •   •   •   •  LCK │ M←   ←   ↓   →  M→  │
╰──────────────╮  SPC │ SPC ╭───────────────╯
               ╰──────┴─────╯
```

### What the labels mean

- `ESC` = Escape
- `DEL` = Delete
- `ENT` = Enter
- `BSP` = Backspace
- `SPR` = select previous
- `SNX` = select next
- `JPR` = jump previous
- `JNX` = jump next
- `M←` = move to beginning of line
- `M→` = move to end of line

### Notes

- The arrow keys are on the right hand.
- The left-hand home row again gives one-shot modifiers: `SFT`, `CTL`, `ALT`, `GUI`.
- On macOS, `GUI` means the Command key.
- `M←` and `M→` are useful for jumping to the start or end of a line.
- Press `LCK` to keep the Navigation layer active.

## Symbol Layer

Use this layer for symbols and right-hand one-shot modifiers.

```text
╭─────────────────────┬─────────────────────╮
│ ---  %   |   #   @& │  •   •   •   •  --- │
│  ^   +   -   _   $  │  •  GUI ALT CTL SFT │
│  <   *   `~  =   >  │ LCK  •   •   •   •  │
╰──────────────╮  SPC │ SPC ╭───────────────╯
               ╰──────┴─────╯
```

### Notes

- Some symbol keys have tap-and-hold variants:
  - `@&` = tap for `@`, hold for `&`
  - `` `~ `` = tap for `` ` ``, hold for `~`
- The right-hand home row gives one-shot modifiers:
  - `GUI` = Command
  - `ALT` = Alt / Option
  - `CTL` = Control
  - `SFT` = Shift
- Press `LCK` to keep the Symbol layer active.

## System Layer

Use this layer for Bluetooth profiles and keyboard system actions.

```text
╭─────────────────────┬─────────────────────╮
│ --- BT0 BT1 BT2  •  │  •   •   •   •  --- │
│  •   ×   ×   ×   •  │  •  GUI ALT CTL SFT │
│  •  OUT  ×  CLR  •  │ LCK  •   •   •   •  │
╰──────────────╮  SPC │ SPC ╭───────────────╯
               ╰──────┴─────╯
```

### What the labels mean

- `BT0`, `BT1`, `BT2` = switch to Bluetooth profile 0, 1, or 2
- `OUT` = toggle output mode between USB & Bluetooth
- `CLR` = clear Bluetooth bonds. MUST BE DOUBLE TAPPED!
- `×` = unused key position
- Press `LCK` to keep the System layer active.

## Combos

Combos are keys you get by pressing multiple positions together.

### Combo position reference

```text
╭─────────────────────┬─────────────────────╮
│ --- LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 --- │
│ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
│ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
╰──────────────╮  LH0 │ RH0 ╭───────────────╯
               ╰──────┴─────╯
```

### Letter combos

- `LT2 + LT3` -> `Q`
- `RT2 + RT3` -> `P`

### Vertical symbol combos

- `RM0 + RT0` -> `/`
- `LM0 + LT0` -> `\`
- `RM1 + RT1` -> `(`
- `LM1 + LT1` -> `)`
- `RM2 + RT2` -> `[`
- `LM2 + LT2` -> `]`
- `RM3 + RT3` -> `{`
- `LM3 + LT3` -> `}`

### Control combos

- `RM1 + RM2 + RM3` -> Backspace
- `LM1 + LM2 + LM3` -> Escape
- `LB2 + LB3` -> Tab
- `RB2 + RB3` -> Enter

### Caps Word combos

- `LB4 + LB3` -> Caps Word
- `RB4 + RB3` -> Caps Word

### What Caps Word does

- Caps Word is an auto-uppercase word mode that is useful for typing names, constants, filenames, and identifiers.
- After you turn it on, letters are automatically typed in uppercase without needing to hold Shift for each letter.
- For example, if you activate Caps Word and type `contributing_guide.md`, the output will be `CONTRIBUTING_GUIDE.md`.
- The mode ends automatically when you press a key that is not a letter (`a-z`, `A-Z`) or underscore (`_`).

## Practical Examples

### Typing a capital letter

- Press `F` and then a right-hand letter, or press `J` and then a left-hand letter.

### Typing a number

- Hold `NUM`
- Press the number
- Release `NUM` to return to normal typing

### Locking a layer

- Hold the layer key
- While on that layer, press `LCK`
- The layer stays on until you switch away

### Using a one-shot modifier

- Hold the layer that contains the modifier
- Tap the modifier once
- Release the layer key
- Then tap the next key normally on your main layer
- Example:
  - hold `NUM`, tap `GUI`, release `NUM`, then tap `C` to copy
  - hold `NUM`, tap `SFT`, release `NUM`, then tap `A` to type uppercase `A`

### Using a combo

- Press both combo keys at the same time
- Example: press `LT2 + LT3` together to type `Q`

## Summary

- ALPHA is your main typing layer.
- NUMBER gives numbers and left-hand one-shot modifiers.
- NAVIGATION gives arrows, editing keys, and movement shortcuts.
- SYMBOL gives symbols and right-hand one-shot modifiers.
- SYSTEM gives Bluetooth and device controls.
- `SPC` means Space.
- `LCK` means Lock.
- `CLR` must be double-tapped.
