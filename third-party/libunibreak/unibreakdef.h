/* vim: set expandtab tabstop=4 softtabstop=4 shiftwidth=4: */

/*
 * Break processing in a Unicode sequence.  Designed to be used in a
 * generic text renderer.
 *
 * Copyright (C) 2015 Wu Yongwei <wuyongwei at gmail dot com>
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the author be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute
 * it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must
 *    not claim that you wrote the original software.  If you use this
 *    software in a product, an acknowledgement in the product
 *    documentation would be appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must
 *    not be misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source
 *    distribution.
 *
 * The main reference is Unicode Standard Annex 14 (UAX #14):
 *      <URL:http://www.unicode.org/reports/tr14/>
 *
 * When this library was designed, this annex was at Revision 19, for
 * Unicode 5.0.0:
 *      <URL:http://www.unicode.org/reports/tr14/tr14-19.html>
 *
 * This library has been updated according to Revision 33, for
 * Unicode 7.0.0:
 *      <URL:http://www.unicode.org/reports/tr14/tr14-33.html>
 *
 * The Unicode Terms of Use are available at
 *      <URL:http://www.unicode.org/copyright.html>
 */

/**
 * @file    unibreakdef.h
 *
 * Header file for private definitions in the libunibreak library.
 *
 * @version 1.1, 2015/04/19
 * @author  Wu Yongwei
 */

#ifndef UNIBREAKDEF_H
#define UNIBREAKDEF_H

#include "unibreakbase.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Constant value to mark the end of string.  It is not a valid Unicode
 * character.
 */
#define EOS 0xFFFFFFFF

/**
 * Abstract function interface for #ub_get_next_char_utf8,
 * #ub_get_next_char_utf16, and #ub_get_next_char_utf32.
 */
typedef utf32_t (*get_next_char_t)(const void *, size_t, size_t *);

/* Function Prototype */
utf32_t ub_get_next_char_utf8(const utf8_t *s, size_t len, size_t *ip);
utf32_t ub_get_next_char_utf16(const utf16_t *s, size_t len, size_t *ip);
utf32_t ub_get_next_char_utf32(const utf32_t *s, size_t len, size_t *ip);

#ifdef __cplusplus
}
#endif

#endif /* UNIBREAKDEF_H */
