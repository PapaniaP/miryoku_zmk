// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom Miryoku Configuration
// This file applies to ALL keyboards using Miryoku

// === LAYOUT ===
// Using default Colemak-DH (no change needed)

// === NAVIGATION & CLIPBOARD ===
// Use macOS clipboard shortcuts (Cmd+C/V/X instead of Ctrl)
#define MIRYOKU_CLIPBOARD_MAC

// Use inverted-T navigation layout
#define MIRYOKU_NAV_INVERTEDT

// === TIMING ADJUSTMENTS ===
// Increase tapping term to reduce accidental home row mod and layer activations
// Default is 200ms, increasing to 250ms for more deliberate holds
#define U_TAPPING_TERM 250

// Increase combo timeout for thumb combos
// Default is 200ms, increasing to 250ms
#define MIRYOKU_KLUDGE_THUMBCOMBOS_TERM 250

// === CUSTOM COMBOS ===
// Custom combos are defined in custom_combos.dtsi:
// - Enter + Tab = Escape
// - S + E = F13 (Leader Key for LeaderKey.app)
