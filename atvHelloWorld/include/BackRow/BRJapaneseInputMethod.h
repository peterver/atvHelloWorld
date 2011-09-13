/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRInputMethod.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRJapaneseInputMethod : BRInputMethod {
@private
	NSString *_mostRecentCandidateBaseCharacter;	// 28 = 0x1c
}
- (void)_createKeyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x315f81e5
- (id)candidates;	// 0x315f81e1
- (void)dealloc;	// 0x315f83f9
- (BOOL)inputText:(id)text;	// 0x315f8441
- (id)isoLanguageCode;	// 0x315f81d5
- (id)name;	// 0x315f81c9
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x315f8395
@end
