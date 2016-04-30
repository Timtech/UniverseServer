#pragma once
#include "World.h"
#include "ReplicaComponents.h"

#include "Common.h"
#include <vector>

enum CHAR_STYLE_HAIR : unsigned long{
	HAIR_NONE = 0,
	HAIR_LONG,
	HAIR_SHORT,
	HAIR_PONY,
	HAIR_FLAT,
	HAIR_LONGER,
	HAIR_LUSH,
	HAIR_SPIKES,
	HAIR_FULL,
	HAIR_TOLL,
	HAIR_LONG_BACK
};

enum CHAR_COLORS : unsigned long {
	COLOR_RED = 0,
	COLOR_BLUE,
	COLOR_YELLOW,
	COLOR_GREEN,
	COLOR_WHITE_REM,
	COLOR_ORANGE,
	COLOR_DARKGREY,
	COLOR_GREY,
	COLOR_LIGHTGREY,
	COLOR_BROWN,
	COLOR_WHITE,
	COLOR_LIGHTBLUE,
	COLOR_LIME,
	COLOR_MAROON,
	COLOR_DARKBLUE,
	COLOR_DARKGREEN,
	COLOR_BEIGE,
	COLOR_PINK,
	COLOR_LIGHTYELLOW,
	COLOR_LIGHTORANGE,
	COLOR_SANDBLUE,
	COLOR_SANDGREEN
};

enum CHAR_STYLE_EYES : unsigned long{
	EYES_NONE = 0, //Can not be reset to 0
	EYES_NORMAL,
	EYES_OLD,
	EYES_FEMALE,
	EYES_SMALL_LID,
	EYES_GRIN,
	EYES_SAD,
	EYES_GRIN2,
	EYES_BORED,
	EYES_BLACK,
	EYES_SMILE,
	EYES_BORED2,
	EYES_EVIL,
	EYES_EVIL2,
	EYES_OOOH,
	EYES_BARS,
	EYES_EVILGRIN,
	EYES_TIRED,
	EYES_TIRED2,
	EYES_BROWS,
	EYES_GLASSES,
	EYES_GLASSES_ROUND,
	EYES_GLASSES_SMALL,
	EYES_EVILGRIN2,
	EYES_SCAR,
	EYES_EVILGRIN3,
	EYES_STAR,
	EYES_STRONGBROWS,
	EYES_GRANDPA,
	EYES_BOLDBOWS,
	EYES_MASK,
	EYES_LEFT_HALF,
	EYES_GRANDPA_SHORT,
	EYES_RIGHT_GLOW,
	EYES_EVILGRIN4,
	EYES_PFLASTER,
	EYES_SUNGLASSES_YELLOW,
	EYES_2,
	EYES_BLACK_BROWS,
};

enum CHAR_STYLE_EYEBROWS : unsigned long{
	EYEBROWS_NONE = 0, //Can not be reset to 0
	EYEBROWS_THIN,
	EYEBROWS_DOWN,
	EYEBROWS_CURVED,
	EYEBROWS_LINE,
	EYEBROWS_OFFSET,
	EYEBROWS_OLD,
	EYEBROWS_OLD2,
	EYEBROWS_BIGBLACK,
	EYEBROWS_SQUAREINV,
	EYEBROWS_LIGHTTHIN,
	EYEBROWS_BANANA,
	EYEBROWS_LIGHTSTRAIGHT,
	EYEBROWS_BOLDOFFSET,
	EYEBROWS_HAIRY,
	EYEBROWS_GREYV,
	EYEBROWS_GERYU,
	EYEBROWS_BLACKROUND,
	EYEBROWS_BLACKCORNER,
	EYBRROWS_WEIRD,
	EYEBROWS_SPIKE,
	EYEBROWS_CURVESPIKE,
	EYEBROWS_THINV,
	EYEBROWS_LONGTHINV,
	EYEBROWS_SMALLM,
	EYEBROWS_WEIRD2,
	EYEBROWS_BROWNV,
	EYEBROWS_THINM,
	EYEBROWS_NORMOFFSET,
	EYEBROWS_CURVED2,
	EYEBROWS_BOOK,
	EYEBROWS_THINBOOK,
	EYEBROWS_THINCURVE,
	EYEBROWS_NO,
	EYEBROWS_VCONNECTED,
	EYEBROWS_BOATS,
	EYEBROWS_STRONGWAVE,
	EYEBROWS_WAVE,
	EYEBROWS_THINGREY,
	EYEBROWS_MID,
	EYEBROWS_PENCIL,
	EYEBROWS_MID2,
	EYEBROWS_ROUNDUP,
	EYEBROWS_MID3,
	EYEBROWS_WEIRD3,
	EYEBROWS_WEIRD4,
	EYEBROWS_OLD3,
	EYEBROWS_THINDOWN,
	EYEBROWS_WEIRDBIG,
	EYEBROWS_BRUSHY,
	EYEBROWS_STRONG,
	EYEBROWS_WEIRD5,
	EYEBROWS_BLUE
};

enum CHAR_STYLE_MOUTH : unsigned long {
	MOUTH_SMALL,
	MOUTH_SMALL_OPEN,

	MOUTH_BLUE = 61, //Makes Head white
};

std::vector<uchar> getWorldTarget(ZoneId zonde_id);
COMPONENT1_POSITION getZoneSpawnPoint(ZoneId zone_id, ZoneId from_zone_id = NO_ZONE);