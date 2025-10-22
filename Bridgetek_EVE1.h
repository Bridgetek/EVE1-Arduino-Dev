/**
 * @file Bridgetek_EVE1.h
 * @brief Support FT800/FT801
 */
/*
 * ============================================================================
 * (C) Copyright,  Bridgetek Pte. Ltd.
 * ============================================================================
 *
 * This source code ("the Software") is provided by Bridgetek Pte Ltd
 * ("Bridgetek") subject to the licence terms set out
 * http://www.ftdichip.com/FTSourceCodeLicenceTerms.htm ("the Licence Terms").
 * You must read the Licence Terms before downloading or using the Software.
 * By installing or using the Software you agree to the Licence Terms. If you
 * do not agree to the Licence Terms then do not download or use the Software.
 *
 * Without prejudice to the Licence Terms, here is a summary of some of the key
 * terms of the Licence Terms (and in the event of any conflict between this
 * summary and the Licence Terms then the text of the Licence Terms will
 * prevail).
 *
 * The Software is provided "as is".
 * There are no warranties (or similar) in relation to the quality of the
 * Software. You use it at your own risk.
 * The Software should not be used in, or for, any medical device, system or
 * appliance. There are exclusions of Bridgetek liability for certain types of loss
 * such as: special loss or damage; incidental loss or damage; indirect or
 * consequential loss or damage; loss of income; loss of business; loss of
 * profits; loss of revenue; loss of contracts; business interruption; loss of
 * the use of money or anticipated savings; loss of information; loss of
 * opportunity; loss of goodwill or reputation; and/or loss of, damage to or
 * corruption of data.
 * There is a monetary cap on Bridgetek's liability.
 * The Software may have subsequently been amended by another user and then
 * distributed by that other user ("Adapted Software").  If so that user may
 * have additional licence terms that apply to those amendments. However, Bridgetek
 * has no liability in relation to those amendments.
 * ============================================================================
 */

#ifndef _BTEVE_H_
#define _BTEVE_H_

#include <stdint.h> // for Uint8/16/32 and Int8/16/32 data types
#include <stdarg.h>

#include "Arduino.h"

/* Clash with Arduino API */
#undef DISPLAY

#define EVE_API 1
#define EVE_SUB_API

//@{
/** @brief Library Includes
 * It will be possible to make a library with these files.
 * Include EVE.h (which is the API as a C++ file which is part of this class.
 * Include HAL and MCU files as "C" files.
 */
//@{
extern "C" {
#include <EVE.h>
#include <HAL.h>
#include <MCU.h>
}
//@}

class Bridgetek_EVE1
{
  public:
    Bridgetek_EVE1(void);

  void setup(uint32_t panel);

  public:
    const uint32_t ADC_DIFFERENTIAL = 0x1ul;
    const uint32_t ADC_SINGLE_ENDED = 0x0ul;
    const uint32_t ADPCM_SAMPLES = 0x2ul;
    const uint32_t API = 1;
    const uint32_t BEGIN_BITMAPS = 0x1ul;
    const uint32_t BEGIN_EDGE_STRIP_A = 0x7ul;
    const uint32_t BEGIN_EDGE_STRIP_B = 0x8ul;
    const uint32_t BEGIN_EDGE_STRIP_L = 0x6ul;
    const uint32_t BEGIN_EDGE_STRIP_R = 0x5ul;
    const uint32_t BEGIN_LINES = 0x3ul;
    const uint32_t BEGIN_LINE_STRIP = 0x4ul;
    const uint32_t BEGIN_POINTS = 0x2ul;
    const uint32_t BEGIN_RECTS = 0x9ul;
    const uint32_t BLEND_DST_ALPHA = 0x3ul;
    const uint32_t BLEND_ONE = 0x1ul;
    const uint32_t BLEND_ONE_MINUS_DST_ALPHA = 0x5ul;
    const uint32_t BLEND_ONE_MINUS_SRC_ALPHA = 0x4ul;
    const uint32_t BLEND_SRC_ALPHA = 0x2ul;
    const uint32_t BLEND_ZERO = 0x0ul;
    const uint32_t DLSWAP_DONE = 0x0ul;
    const uint32_t DLSWAP_FRAME = 0x2ul;
    const uint32_t DLSWAP_LINE = 0x1ul;
    const uint32_t FILTER_BILINEAR = 0x1ul;
    const uint32_t FILTER_NEAREST = 0x0ul;
    const uint32_t FORMAT_ARGB1555 = 0x0ul;
    const uint32_t FORMAT_ARGB2 = 0x5ul;
    const uint32_t FORMAT_ARGB4 = 0x6ul;
    const uint32_t FORMAT_BARGRAPH = 0xbul;
    const uint32_t FORMAT_L1 = 0x1ul;
    const uint32_t FORMAT_L4 = 0x2ul;
    const uint32_t FORMAT_L8 = 0x3ul;
    const uint32_t FORMAT_PALETTED = 0x8ul;
    const uint32_t FORMAT_RGB332 = 0x4ul;
    const uint32_t FORMAT_RGB565 = 0x7ul;
    const uint32_t FORMAT_TEXT8X8 = 0x9ul;
    const uint32_t FORMAT_TEXTVGA = 0xaul;
    const uint32_t INT_CMDEMPTY = 0x20ul;
    const uint32_t INT_CMDFLAG = 0x40ul;
    const uint32_t INT_CONVCOMPLETE = 0x80ul;
    const uint32_t INT_PLAYBACK = 0x10ul;
    const uint32_t INT_SOUND = 0x8ul;
    const uint32_t INT_SWAP = 0x1ul;
    const uint32_t INT_TAG = 0x4ul;
    const uint32_t INT_TOUCH = 0x2ul;
    const uint32_t LINEAR_SAMPLES = 0x0ul;
    const uint32_t LOW_FREQ_BOUND = 47040000L;
    const uint32_t OPT_3D = 0x0ul;
    const uint32_t OPT_CENTER = 0x600ul;
    const uint32_t OPT_CENTERX = 0x200ul;
    const uint32_t OPT_CENTERY = 0x400ul;
    const uint32_t OPT_FLAT = 0x100ul;
    const uint32_t OPT_MONO = 0x1ul;
    const uint32_t OPT_NOBACK = 0x1000ul;
    const uint32_t OPT_NODL = 0x2ul;
    const uint32_t OPT_NOHANDS = 0xc000ul;
    const uint32_t OPT_NOHM = 0x4000ul;
    const uint32_t OPT_NOPOINTER = 0x4000ul;
    const uint32_t OPT_NOSECS = 0x8000ul;
    const uint32_t OPT_NOTICKS = 0x2000ul;
    const uint32_t OPT_RGB565 = 0x0ul;
    const uint32_t OPT_RIGHTX = 0x800ul;
    const uint32_t OPT_SIGNED = 0x100ul;
    const uint32_t RAM_CMD = 0x108000ul;
    const uint32_t RAM_CMD_SIZE = (4*1024L);
    const uint32_t RAM_DL = 0x100000ul;
    const uint32_t RAM_DL_SIZE = (8*1024L);
    const uint32_t RAM_G = 0x0ul;
    const uint32_t RAM_G_SIZE = (256*1024L);
    const uint32_t RAM_PAL = 0x102000ul;
    const uint32_t RAM_REG = 0x102400ul;
    const uint32_t REG_ANALOG = 0x102538ul;
    const uint32_t REG_CLOCK = 0x102408ul;
    const uint32_t REG_CMD_DL = 0x1024ecul;
    const uint32_t REG_CMD_READ = 0x1024e4ul;
    const uint32_t REG_CMD_WRITE = 0x1024e8ul;
    const uint32_t REG_CPURESET = 0x10241cul;
    const uint32_t REG_CSPREAD = 0x102464ul;
    const uint32_t REG_CTOUCH_EXTENDED = 0x1024f4ul;
    const uint32_t REG_CTOUCH_RAW_XY = 0x102508ul;
    const uint32_t REG_CTOUCH_TAG = 0x102518ul;
    const uint32_t REG_CTOUCH_TOUCH0_XY = 0x102510ul;
    const uint32_t REG_CTOUCH_TOUCH1_XY = 0x102508ul;
    const uint32_t REG_CTOUCH_TOUCH2_XY = 0x102574ul;
    const uint32_t REG_CTOUCH_TOUCH3_XY = 0x102578ul;
    const uint32_t REG_CTOUCH_TOUCH4_X = 0x102538ul;
    const uint32_t REG_CTOUCH_TOUCH4_Y = 0x10250cul;
    const uint32_t REG_CTOUCH_TRANSFORM_A = 0x10251cul;
    const uint32_t REG_CTOUCH_TRANSFORM_B = 0x102520ul;
    const uint32_t REG_CTOUCH_TRANSFORM_C = 0x102524ul;
    const uint32_t REG_CTOUCH_TRANSFORM_D = 0x102528ul;
    const uint32_t REG_CTOUCH_TRANSFORM_E = 0x10252cul;
    const uint32_t REG_CTOUCH_TRANSFORM_F = 0x102530ul;
    const uint32_t REG_DITHER = 0x10245cul;
    const uint32_t REG_DLSWAP = 0x102450ul;
    const uint32_t REG_FRAMES = 0x102404ul;
    const uint32_t REG_FREQUENCY = 0x10240cul;
    const uint32_t REG_GPIO = 0x102490ul;
    const uint32_t REG_GPIO_DIR = 0x10248cul;
    const uint32_t REG_HCYCLE = 0x102428ul;
    const uint32_t REG_HOFFSET = 0x10242cul;
    const uint32_t REG_HSIZE = 0x102430ul;
    const uint32_t REG_HSYNC0 = 0x102434ul;
    const uint32_t REG_HSYNC1 = 0x102438ul;
    const uint32_t REG_ID = 0x102400ul;
    const uint32_t REG_INT_EN = 0x10249cul;
    const uint32_t REG_INT_FLAGS = 0x102498ul;
    const uint32_t REG_INT_MASK = 0x1024a0ul;
    const uint32_t REG_MACRO_0 = 0x1024c8ul;
    const uint32_t REG_MACRO_1 = 0x1024ccul;
    const uint32_t REG_OUTBITS = 0x102458ul;
    const uint32_t REG_PCLK = 0x10246cul;
    const uint32_t REG_PCLK_POL = 0x102468ul;
    const uint32_t REG_PLAY = 0x102488ul;
    const uint32_t REG_PLAYBACK_FORMAT = 0x1024b4ul;
    const uint32_t REG_PLAYBACK_FREQ = 0x1024b0ul;
    const uint32_t REG_PLAYBACK_LENGTH = 0x1024a8ul;
    const uint32_t REG_PLAYBACK_LOOP = 0x1024b8ul;
    const uint32_t REG_PLAYBACK_PLAY = 0x1024bcul;
    const uint32_t REG_PLAYBACK_READPTR = 0x1024acul;
    const uint32_t REG_PLAYBACK_START = 0x1024a4ul;
    const uint32_t REG_PWM_DUTY = 0x1024c4ul;
    const uint32_t REG_PWM_HZ = 0x1024c0ul;
    const uint32_t REG_ROMSUB_SEL = 0x1024e0ul;
    const uint32_t REG_ROTATE = 0x102454ul;
    const uint32_t REG_SCREENSHOT_BUSY = 0x1024d8ul;
    const uint32_t REG_SCREENSHOT_EN = 0x102410ul;
    const uint32_t REG_SCREENSHOT_READ = 0x102554ul;
    const uint32_t REG_SCREENSHOT_START = 0x102418ul;
    const uint32_t REG_SCREENSHOT_Y = 0x102414ul;
    const uint32_t REG_SOUND = 0x102484ul;
    const uint32_t REG_SWIZZLE = 0x102460ul;
    const uint32_t REG_TAG = 0x102478ul;
    const uint32_t REG_TAG_X = 0x102470ul;
    const uint32_t REG_TAG_Y = 0x102474ul;
    const uint32_t REG_TAP_CRC = 0x102420ul;
    const uint32_t REG_TAP_MASK = 0x102424ul;
    const uint32_t REG_TOUCH_ADC_MODE = 0x1024f4ul;
    const uint32_t REG_TOUCH_CHARGE = 0x1024f8ul;
    const uint32_t REG_TOUCH_DIRECT_XY = 0x102574ul;
    const uint32_t REG_TOUCH_DIRECT_Z1Z2 = 0x102578ul;
    const uint32_t REG_TOUCH_MODE = 0x1024f0ul;
    const uint32_t REG_TOUCH_OVERSAMPLE = 0x102500ul;
    const uint32_t REG_TOUCH_RAW_XY = 0x102508ul;
    const uint32_t REG_TOUCH_RZ = 0x10250cul;
    const uint32_t REG_TOUCH_RZTHRESH = 0x102504ul;
    const uint32_t REG_TOUCH_SCREEN_XY = 0x102510ul;
    const uint32_t REG_TOUCH_SETTLE = 0x1024fcul;
    const uint32_t REG_TOUCH_TAG = 0x102518ul;
    const uint32_t REG_TOUCH_TAG_XY = 0x102514ul;
    const uint32_t REG_TOUCH_TRANSFORM_A = 0x10251cul;
    const uint32_t REG_TOUCH_TRANSFORM_B = 0x102520ul;
    const uint32_t REG_TOUCH_TRANSFORM_C = 0x102524ul;
    const uint32_t REG_TOUCH_TRANSFORM_D = 0x102528ul;
    const uint32_t REG_TOUCH_TRANSFORM_E = 0x10252cul;
    const uint32_t REG_TOUCH_TRANSFORM_F = 0x102530ul;
    const uint32_t REG_TRACK = 0x109000ul;
    const uint32_t REG_TRIM = 0x10256cul;
    const uint32_t REG_VCYCLE = 0x10243cul;
    const uint32_t REG_VOFFSET = 0x102440ul;
    const uint32_t REG_VOL_PB = 0x10247cul;
    const uint32_t REG_VOL_SOUND = 0x102480ul;
    const uint32_t REG_VSIZE = 0x102444ul;
    const uint32_t REG_VSYNC0 = 0x102448ul;
    const uint32_t REG_VSYNC1 = 0x10244cul;
    const uint32_t ROMFONT_MAX = 31;
    const uint32_t ROMFONT_TABLEADDRESS = 0x0ffffcul;
    const uint32_t ROM_CHIPID = 0x0c0000ul;
    const uint32_t ROM_FONT = 0x0bb23cul;
    const uint32_t STENCIL_DECR = 0x4ul;
    const uint32_t STENCIL_INCR = 0x3ul;
    const uint32_t STENCIL_INVERT = 0x5ul;
    const uint32_t STENCIL_KEEP = 0x1ul;
    const uint32_t STENCIL_REPLACE = 0x2ul;
    const uint32_t STENCIL_ZERO = 0x0ul;
    const uint32_t TEST_ALWAYS = 0x7ul;
    const uint32_t TEST_EQUAL = 0x5ul;
    const uint32_t TEST_GEQUAL = 0x4ul;
    const uint32_t TEST_GREATER = 0x3ul;
    const uint32_t TEST_LEQUAL = 0x2ul;
    const uint32_t TEST_LESS = 0x1ul;
    const uint32_t TEST_NEVER = 0x0ul;
    const uint32_t TEST_NOTEQUAL = 0x6ul;
    const uint32_t TOUCHMODE_CONTINUOUS = 0x3ul;
    const uint32_t TOUCHMODE_FRAME = 0x2ul;
    const uint32_t TOUCHMODE_OFF = 0x0ul;
    const uint32_t TOUCHMODE_ONESHOT = 0x1ul;
    const uint32_t ULAW_SAMPLES = 0x1ul;
    const uint32_t VOL_ZERO = 0x0ul;
    const uint32_t WRAP_BORDER = 0x0ul;
    const uint32_t WRAP_REPEAT = 0x1ul;
    const uint8_t ROMFONT_FORMATS[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4};
    const uint8_t ROMFONT_HEIGHTS[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,16,16,13,17,20,22,29,38,16,20,25,28,36,49};
    const uint8_t ROMFONT_WIDTHS[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,10,13,14,17,24,30,12,16,18,22,28,36};
    int LIB_AwaitCoProEmpty(void) { return ::EVE_LIB_AwaitCoProEmpty(); };
    uint16_t LIB_MemRead16(uint32_t address) { return ::EVE_LIB_MemRead16(address); };
    uint16_t LIB_SendString(const char* string) { return ::EVE_LIB_SendString(string); };
    uint32_t LIB_GetResult(int offset) { return ::EVE_LIB_GetResult(offset); };
    uint32_t LIB_MemRead32(uint32_t address) { return ::EVE_LIB_MemRead32(address); };
    uint8_t LIB_MemRead8(uint32_t address) { return ::EVE_LIB_MemRead8(address); };
    void ALPHA_FUNC(uint8_t func,  uint8_t ref) { ::EVE_ALPHA_FUNC(func, ref); };
    void BEGIN(uint8_t prim) { ::EVE_BEGIN(prim); };
    void BITMAP_HANDLE(uint8_t handle) { ::EVE_BITMAP_HANDLE(handle); };
    void BITMAP_LAYOUT(uint8_t format,  uint16_t linestride,  uint16_t height) { ::EVE_BITMAP_LAYOUT(format, linestride, height); };
    void BITMAP_SIZE(uint8_t filter,  uint8_t wrapx,  uint8_t wrapy,  uint16_t width,  uint16_t height) { ::EVE_BITMAP_SIZE(filter, wrapx, wrapy, width, height); };
    void BITMAP_SOURCE(int32_t addr) { ::EVE_BITMAP_SOURCE(addr); };
    void BITMAP_TRANSFORM_A(long a) { ::EVE_BITMAP_TRANSFORM_A(a); };
    void BITMAP_TRANSFORM_B(long b) { ::EVE_BITMAP_TRANSFORM_B(b); };
    void BITMAP_TRANSFORM_C(long c) { ::EVE_BITMAP_TRANSFORM_C(c); };
    void BITMAP_TRANSFORM_D(long d) { ::EVE_BITMAP_TRANSFORM_D(d); };
    void BITMAP_TRANSFORM_E(long e) { ::EVE_BITMAP_TRANSFORM_E(e); };
    void BITMAP_TRANSFORM_F(long f) { ::EVE_BITMAP_TRANSFORM_F(f); };
    void BLEND_FUNC(uint8_t src,  uint8_t dst) { ::EVE_BLEND_FUNC(src, dst); };
    void CALL(uint16_t dest) { ::EVE_CALL(dest); };
    void CELL(uint8_t cell) { ::EVE_CELL(cell); };
    void CLEAR(uint8_t c,  uint8_t s,  uint8_t t) { ::EVE_CLEAR(c, s, t); };
    void CLEAR_COLOR(uint32_t c) { ::EVE_CLEAR_COLOR(c); };
    void CLEAR_COLOR_A(uint8_t alpha) { ::EVE_CLEAR_COLOR_A(alpha); };
    void CLEAR_COLOR_RGB(uint8_t r,  uint8_t g,  uint8_t b) { ::EVE_CLEAR_COLOR_RGB(r, g, b); };
    void CLEAR_STENCIL(uint8_t s) { ::EVE_CLEAR_STENCIL(s); };
    void CLEAR_TAG(uint8_t s) { ::EVE_CLEAR_TAG(s); };
    void CMD(uint32_t c) { ::EVE_CMD(c); };
    void CMD_APPEND(uint32_t ptr,  uint32_t num) { ::EVE_CMD_APPEND(ptr, num); };
    void CMD_BGCOLOR(uint32_t c) { ::EVE_CMD_BGCOLOR(c); };
    void CMD_BITMAP_TRANSFORM(int32_t x0,  int32_t y0,  int32_t x1,  int32_t y1,  int32_t x2,  int32_t y2,  int32_t tx0,  int32_t ty0,  int32_t tx1,  int32_t ty1,  int32_t tx2,  int32_t ty2,  uint16_t result) { ::EVE_CMD_BITMAP_TRANSFORM(x0, y0, x1, y1, x2, y2, tx0, ty0, tx1, ty1, tx2, ty2, result); };
    void CMD_BUTTON(int16_t x,  int16_t y,  int16_t w,  int16_t h,  int16_t font,  uint16_t options,  const char* string, ...) { va_list myargs; va_start(myargs, string); ::EVE_CMD_BUTTON(x, y, w, h, font, options, string, myargs); va_end(myargs); };
    void CMD_CALIBRATE(uint32_t result) { ::EVE_CMD_CALIBRATE(result); };
    void CMD_CLOCK(int16_t x,  int16_t y,  int16_t r,  uint16_t options,  uint16_t h,  uint16_t m,  uint16_t s,  uint16_t ms) { ::EVE_CMD_CLOCK(x, y, r, options, h, m, s, ms); };
    void CMD_COLDSTART(void) { ::EVE_CMD_COLDSTART(); };
    void CMD_DIAL(int16_t x,  int16_t y,  int16_t r,  uint16_t options,  uint16_t val) { ::EVE_CMD_DIAL(x, y, r, options, val); };
    void CMD_DLSTART(void) { ::EVE_CMD_DLSTART(); };
    void CMD_FGCOLOR(uint32_t c) { ::EVE_CMD_FGCOLOR(c); };
    void CMD_GAUGE(int16_t x,  int16_t y,  int16_t r,  uint16_t options,  uint16_t major,  uint16_t minor,  uint16_t val,  uint16_t range) { ::EVE_CMD_GAUGE(x, y, r, options, major, minor, val, range); };
    void CMD_GETMATRIX(int32_t a,  int32_t b,  int32_t c,  int32_t d,  int32_t e,  int32_t f) { ::EVE_CMD_GETMATRIX(a, b, c, d, e, f); };
    void CMD_GETPROPS(uint32_t ptr,  uint32_t w,  uint32_t h) { ::EVE_CMD_GETPROPS(ptr, w, h); };
    void CMD_GETPTR(uint32_t result) { ::EVE_CMD_GETPTR(result); };
    void CMD_GRADCOLOR(uint32_t c) { ::EVE_CMD_GRADCOLOR(c); };
    void CMD_GRADIENT(int16_t x0,  int16_t y0,  uint32_t rgb0,  int16_t x1,  int16_t y1,  uint32_t rgb1) { ::EVE_CMD_GRADIENT(x0, y0, rgb0, x1, y1, rgb1); };
    void CMD_INFLATE(uint32_t ptr) { ::EVE_CMD_INFLATE(ptr); };
    void CMD_INTERRUPT(uint32_t ms) { ::EVE_CMD_INTERRUPT(ms); };
    void CMD_KEYS(int16_t x,  int16_t y,  int16_t w,  int16_t h,  int16_t font,  uint16_t options,  const char* string) { ::EVE_CMD_KEYS(x, y, w, h, font, options, string); };
    void CMD_LOADIDENTITY(void) { ::EVE_CMD_LOADIDENTITY(); };
    void CMD_LOADIMAGE(uint32_t ptr,  uint32_t options) { ::EVE_CMD_LOADIMAGE(ptr, options); };
    void CMD_LOGO(void) { ::EVE_CMD_LOGO(); };
    void CMD_MEMCPY(uint32_t dest,  uint32_t src,  uint32_t num) { ::EVE_CMD_MEMCPY(dest, src, num); };
    void CMD_MEMCRC(uint32_t ptr,  uint32_t num,  uint32_t result) { ::EVE_CMD_MEMCRC(ptr, num, result); };
    void CMD_MEMSET(uint32_t ptr,  uint32_t value,  uint32_t num) { ::EVE_CMD_MEMSET(ptr, value, num); };
    void CMD_MEMWRITE(uint32_t ptr,  uint32_t num) { ::EVE_CMD_MEMWRITE(ptr, num); };
    void CMD_MEMZERO(uint32_t ptr,  uint32_t num) { ::EVE_CMD_MEMZERO(ptr, num); };
    void CMD_NUMBER(int16_t x,  int16_t y,  int16_t font,  uint16_t options,  int32_t n) { ::EVE_CMD_NUMBER(x, y, font, options, n); };
    void CMD_PROGRESS(int16_t x,  int16_t y,  int16_t w,  int16_t h,  uint16_t options,  uint16_t val,  uint16_t range) { ::EVE_CMD_PROGRESS(x, y, w, h, options, val, range); };
    void CMD_REGREAD(uint32_t ptr,  uint32_t result) { ::EVE_CMD_REGREAD(ptr, result); };
    void CMD_ROTATE(int32_t a) { ::EVE_CMD_ROTATE(a); };
    void CMD_SCALE(int32_t sx,  int32_t sy) { ::EVE_CMD_SCALE(sx, sy); };
    void CMD_SCREENSAVER(void) { ::EVE_CMD_SCREENSAVER(); };
    void CMD_SCROLLBAR(int16_t x,  int16_t y,  int16_t w,  int16_t h,  uint16_t options,  uint16_t val,  uint16_t size,  uint16_t range) { ::EVE_CMD_SCROLLBAR(x, y, w, h, options, val, size, range); };
    void CMD_SETFONT(uint32_t font,  uint32_t ptr) { ::EVE_CMD_SETFONT(font, ptr); };
    void CMD_SETMATRIX(void) { ::EVE_CMD_SETMATRIX(); };
    void CMD_SKETCH(int16_t x,  int16_t y,  uint16_t w,  uint16_t h,  uint32_t ptr,  uint16_t format) { ::EVE_CMD_SKETCH(x, y, w, h, ptr, format); };
    void CMD_SLIDER(int16_t x,  int16_t y,  int16_t w,  int16_t h,  uint16_t options,  uint16_t val,  uint16_t range) { ::EVE_CMD_SLIDER(x, y, w, h, options, val, range); };
    void CMD_SNAPSHOT(uint32_t ptr) { ::EVE_CMD_SNAPSHOT(ptr); };
    void CMD_SPINNER(int16_t x,  int16_t y,  uint16_t style,  uint16_t scale) { ::EVE_CMD_SPINNER(x, y, style, scale); };
    void CMD_STOP(void) { ::EVE_CMD_STOP(); };
    void CMD_SWAP(void) { ::EVE_CMD_SWAP(); };
    void CMD_TEXT(int16_t x,  int16_t y,  int16_t font,  uint16_t options,  const char* string, ...) { va_list myargs; va_start(myargs, string); ::EVE_CMD_TEXT(x, y, font, options, string, myargs); va_end(myargs); };
    void CMD_TOGGLE(int16_t x,  int16_t y,  int16_t w,  int16_t font,  uint16_t options,  uint16_t state,  const char* string, ...) { va_list myargs; va_start(myargs, string); ::EVE_CMD_TOGGLE(x, y, w, font, options, state, string, myargs); va_end(myargs); };
    void CMD_TRACK(int16_t x,  int16_t y,  int16_t w,  int16_t h,  int16_t tag) { ::EVE_CMD_TRACK(x, y, w, h, tag); };
    void CMD_TRANSLATE(int32_t tx,  int32_t ty) { ::EVE_CMD_TRANSLATE(tx, ty); };
    void COLOR(uint32_t c) { ::EVE_COLOR(c); };
    void COLOR_A(uint8_t alpha) { ::EVE_COLOR_A(alpha); };
    void COLOR_MASK(uint8_t r,  uint8_t g,  uint8_t b,  uint8_t a) { ::EVE_COLOR_MASK(r, g, b, a); };
    void COLOR_RGB(uint8_t r,  uint8_t g,  uint8_t b) { ::EVE_COLOR_RGB(r, g, b); };
    void DISPLAY(void) { ::EVE_DISPLAY(); };
    void END(void) { ::EVE_END(); };
    void Init(void) { ::EVE_Init(); };
    void JUMP(uint16_t dest) { ::EVE_JUMP(dest); };
    void LIB_BeginCoProList(void) { ::EVE_LIB_BeginCoProList(); };
    void LIB_EndCoProList(void) { ::EVE_LIB_EndCoProList(); };
    void LIB_GetMatrix(uint32_t *a,  uint32_t *b,  uint32_t *c,  uint32_t *d,  uint32_t *e,  uint32_t *f) { ::EVE_LIB_GetMatrix(a, b, c, d, e, f); };
    void LIB_GetProps(uint32_t *addr,  uint32_t *width,  uint32_t *height) { ::EVE_LIB_GetProps(addr, width, height); };
    void LIB_GetPtr(uint32_t *addr) { ::EVE_LIB_GetPtr(addr); };
    void LIB_MemCrc(uint32_t ptr,  uint32_t num,  uint32_t *result) { ::EVE_LIB_MemCrc(ptr, num, result); };
    void LIB_MemWrite16(uint32_t addr,  uint16_t value) { ::EVE_LIB_MemWrite16(addr, value); };
    void LIB_MemWrite32(uint32_t addr,  uint32_t value) { ::EVE_LIB_MemWrite32(addr, value); };
    void LIB_MemWrite8(uint32_t addr,  uint8_t value) { ::EVE_LIB_MemWrite8(addr, value); };
    void LIB_ReadDataFromRAMG(uint8_t *ImgData,  uint32_t DataSize,  uint32_t SrcAddress) { ::EVE_LIB_ReadDataFromRAMG(ImgData, DataSize, SrcAddress); };
    void LIB_WriteDataToCMD(const uint8_t *ImgData,  uint32_t DataSize) { ::EVE_LIB_WriteDataToCMD(ImgData, DataSize); };
    void LIB_WriteDataToRAMG(const uint8_t *ImgData,  uint32_t DataSize,  uint32_t DestAddress) { ::EVE_LIB_WriteDataToRAMG(ImgData, DataSize, DestAddress); };
    void LINE_WIDTH(uint16_t width) { ::EVE_LINE_WIDTH(width); };
    void MACRO(uint8_t m) { ::EVE_MACRO(m); };
    void POINT_SIZE(uint16_t size) { ::EVE_POINT_SIZE(size); };
    void RESTORE_CONTEXT(void) { ::EVE_RESTORE_CONTEXT(); };
    void RETURN(void) { ::EVE_RETURN(); };
    void SAVE_CONTEXT(void) { ::EVE_SAVE_CONTEXT(); };
    void SCISSOR_SIZE(uint16_t width,  uint16_t height) { ::EVE_SCISSOR_SIZE(width, height); };
    void SCISSOR_XY(uint16_t x,  uint16_t y) { ::EVE_SCISSOR_XY(x, y); };
    void STENCIL_FUNC(uint8_t func,  uint8_t ref,  uint8_t mask) { ::EVE_STENCIL_FUNC(func, ref, mask); };
    void STENCIL_MASK(uint8_t mask) { ::EVE_STENCIL_MASK(mask); };
    void STENCIL_OP(uint8_t sfail,  uint8_t spass) { ::EVE_STENCIL_OP(sfail, spass); };
    void TAG(uint8_t s) { ::EVE_TAG(s); };
    void TAG_MASK(uint8_t mask) { ::EVE_TAG_MASK(mask); };
    void VERTEX2F(int16_t x,  int16_t y) { ::EVE_VERTEX2F(x, y); };
    void VERTEX2II(uint16_t x,  uint16_t y,  uint8_t handle, uint8_t cell) { ::EVE_VERTEX2II(x, y, handle, cell); };

  public:
    /* Font table structure */
    /* On EVE4 onwards this is called the Legacy Font Structure. */
    typedef struct
    {
        /* Width of each character font from 0 to 127 */
        uint8_t    FontWidth[128];
        /* Bitmap format of font - this is the same as the EVE_FORMAT_x, where x is L1, L2, L4 etc. */
        uint32_t    FontBitmapFormat;
        /* Font line stride in bytes */
        uint32_t    FontLineStride;
        /* Font width in pixels */
        uint32_t    FontWidthInPixels;
        /* Font height in pixels */
        uint32_t    FontHeightInPixels;
        /* Pointer to font graphics raw data */
        uint32_t    PointerToFontGraphicsData;
    } EVE_GPU_FONT_HEADER;



  private:
    void setpanel(uint32_t panel);
};

#endif    /* _BTEVE_H_ */
