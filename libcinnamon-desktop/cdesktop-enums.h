/*
 * Copyright © 2010 Codethink Limited
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * Authors:
 *	Ryan Lortie <desrt@desrt.ca>
 */

#ifndef __CDesktop_enums_h__
#define __CDesktop_enums_h__

typedef enum
{
  C_DESKTOP_PROXY_MODE_NONE,
  C_DESKTOP_PROXY_MODE_MANUAL,
  C_DESKTOP_PROXY_MODE_AUTO
} CDesktopProxyMode;

typedef enum
{
  C_DESKTOP_TOOLBAR_STYLE_BOTH,
  C_DESKTOP_TOOLBAR_STYLE_BOTH_HORIZ,
  C_DESKTOP_TOOLBAR_STYLE_ICONS,
  C_DESKTOP_TOOLBAR_STYLE_TEXT
} CDesktopToolbarStyle;

typedef enum
{
  C_DESKTOP_TOOLBAR_ICON_SIZE_SMALL,
  C_DESKTOP_TOOLBAR_ICON_SIZE_LARGE
} CDesktopToolbarIconSize;

typedef enum
{
  C_DESKTOP_BACKGROUND_STYLE_NONE,
  C_DESKTOP_BACKGROUND_STYLE_WALLPAPER,
  C_DESKTOP_BACKGROUND_STYLE_CENTERED,
  C_DESKTOP_BACKGROUND_STYLE_SCALED,
  C_DESKTOP_BACKGROUND_STYLE_STRETCHED,
  C_DESKTOP_BACKGROUND_STYLE_ZOOM,
  C_DESKTOP_BACKGROUND_STYLE_SPANNED
} CDesktopBackgroundStyle;

typedef enum
{
  C_DESKTOP_BACKGROUND_SHADING_SOLID,
  C_DESKTOP_BACKGROUND_SHADING_VERTICAL,
  C_DESKTOP_BACKGROUND_SHADING_HORIZONTAL
} CDesktopBackgroundShading;

typedef enum
{
  C_DESKTOP_MOUSE_DWELL_MODE_WINDOW,
  C_DESKTOP_MOUSE_DWELL_MODE_GESTURE
} CDesktopMouseDwellMode;

typedef enum
{
  C_DESKTOP_MOUSE_DWELL_DIRECTION_LEFT,
  C_DESKTOP_MOUSE_DWELL_DIRECTION_RIGHT,
  C_DESKTOP_MOUSE_DWELL_DIRECTION_UP,
  C_DESKTOP_MOUSE_DWELL_DIRECTION_DOWN
} CDesktopMouseDwellDirection;

typedef enum
{
  C_DESKTOP_CLOCK_FORMAT_24H,
  C_DESKTOP_CLOCK_FORMAT_12H
} CDesktopClockFormat;

typedef enum
{
  C_DESKTOP_SCREENSAVER_MODE_BLANK_ONLY,
  C_DESKTOP_SCREENSAVER_MODE_RANDOM,
  C_DESKTOP_SCREENSAVER_MODE_SINGLE
} CDesktopScreensaverMode;

typedef enum
{
  C_DESKTOP_MAGNIFIER_MOUSE_TRACKING_MODE_NONE,
  C_DESKTOP_MAGNIFIER_MOUSE_TRACKING_MODE_CENTERED,
  C_DESKTOP_MAGNIFIER_MOUSE_TRACKING_MODE_PROPORTIONAL,
  C_DESKTOP_MAGNIFIER_MOUSE_TRACKING_MODE_PUSH
} CDesktopMagnifierMouseTrackingMode;

typedef enum
{
  C_DESKTOP_MAGNIFIER_SCREEN_POSITION_NONE,
  C_DESKTOP_MAGNIFIER_SCREEN_POSITION_FULL_SCREEN,
  C_DESKTOP_MAGNIFIER_SCREEN_POSITION_TOP_HALF,
  C_DESKTOP_MAGNIFIER_SCREEN_POSITION_BOTTOM_HALF,
  C_DESKTOP_MAGNIFIER_SCREEN_POSITION_LEFT_HALF,
  C_DESKTOP_MAGNIFIER_SCREEN_POSITION_RIGHT_HALF,
} CDesktopMagnifierScreenPosition;

typedef enum
{
  C_DESKTOP_TITLEBAR_ACTION_TOGGLE_SHADE,
  C_DESKTOP_TITLEBAR_ACTION_TOGGLE_MAXIMIZE,
  C_DESKTOP_TITLEBAR_ACTION_TOGGLE_MAXIMIZE_HORIZONTALLY,
  C_DESKTOP_TITLEBAR_ACTION_TOGGLE_MAXIMIZE_VERTICALLY,
  C_DESKTOP_TITLEBAR_ACTION_MINIMIZE,
  C_DESKTOP_TITLEBAR_ACTION_NONE,
  C_DESKTOP_TITLEBAR_ACTION_LOWER,
  C_DESKTOP_TITLEBAR_ACTION_MENU,
} CDesktopTitlebarAction;

typedef enum
{
  C_DESKTOP_FOCUS_MODE_CLICK,
  C_DESKTOP_FOCUS_MODE_SLOPPY,
  C_DESKTOP_FOCUS_MODE_MOUSE,
} CDesktopFocusMode;

typedef enum
{
  C_DESKTOP_FOCUS_NEW_WINDOWS_SMART,
  C_DESKTOP_FOCUS_NEW_WINDOWS_STRICT,
} CDesktopFocusNewWindows;

typedef enum
{
  C_DESKTOP_VISUAL_BELL_FULLSCREEN_FLASH,
  C_DESKTOP_VISUAL_BELL_FRAME_FLASH,
} CDesktopVisualBellType;

#endif /* __CDesktop_enums_h__ */