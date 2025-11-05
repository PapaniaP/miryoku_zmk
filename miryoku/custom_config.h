// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom Miryoku Configuration
// This file applies to ALL keyboards using Miryoku

// === LAYOUT ===
// Using default Colemak-DH (no change needed)

// === TIMING ADJUSTMENTS ===
// Increase tapping term to reduce accidental home row mod and layer activations
// Default is 200ms, increasing to 250ms for more deliberate holds
#define U_TAPPING_TERM 250

// Increase combo timeout for thumb combos
// Default is 200ms, increasing to 250ms
#define MIRYOKU_KLUDGE_THUMBCOMBOS_TERM 250

// === CUSTOM COMBOS ===
// Custom combos:
// - Tab + Enter = Escape
// - S + E = F13 (Leader Key for LeaderKey.app)
// - Space + Backspace = Caps Lock (remap to Hyper at OS level)
#include "custom_combos.dtsi"
