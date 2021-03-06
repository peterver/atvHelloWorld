/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRImage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface BRInitialImage : BRImage {
@private
	NSData *_data;	// 36 = 0x24
}
+ (id)initialImageWithData:(id)data;	// 0x31640d81
- (void)dealloc;	// 0x31640d39
- (void)purgeRawData;	// 0x31640d11
- (id)rawData;	// 0x31640d01
@end

