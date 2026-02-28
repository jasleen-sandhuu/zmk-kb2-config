/*                              30 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │ --   0   1   2   3 │  4   5   6   7  -- │ │ --- LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 --- │
  │  8   9  10  11  12 │ 13  14  15  16  17 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
  │ 18  19  20  21  22 │ 23  24  25  26  27 │ │ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
  ╰──────────────╮  28 │ 29  ╭──────────────╯ ╰──────────────╮  LH0 │ RH0 ╭───────────────╯
                 ╰─────┴─────╯                               ╰──────┴─────╯             */

#pragma once

#define LT3  0  // left-top row
#define LT2  1
#define LT1  2
#define LT0  3

#define RT0  4  // right-top row
#define RT1  5
#define RT2  6
#define RT3  7

#define LM4  8  // left-middle row
#define LM3  9
#define LM2 10
#define LM1 11
#define LM0 12

#define RM0 13  // right-middle row
#define RM1 14
#define RM2 15
#define RM3 16
#define RM4 17

#define LB4 18  // left-bottom row
#define LB3 19
#define LB2 20
#define LB1 21
#define LB0 22

#define RB0 23  // right-bottom row
#define RB1 24
#define RB2 25
#define RB3 26
#define RB4 27

#define LH0 28  // left-thumb key
#define RH0 29  // right-thumb key

#define KEYS_L LT0 LT1 LT2 LT3 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4
#define KEYS_R RT0 RT1 RT2 RT3 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4
#define THUMBS_L LH0
#define THUMBS_R RH0