/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRNetworkMediaProvider.h"

@class NSMutableArray;

@interface BRMovieTrailersProvider : BRNetworkMediaProvider {
@private
	NSMutableArray *_mediaCollections;	// 12 = 0xc
	int _lastError;	// 16 = 0x10
}
@property(readonly, assign) int lastError;	// G=0x315ce7fd; converted property
+ (void)initialize;	// 0x315b0b79
+ (BOOL)trailersAvailable;	// 0x315ce7f9
- (id)init;	// 0x315b0c9d
- (BOOL)_addMediaAsset:(id)asset;	// 0x315b2de9
- (void)_loadTrailers;	// 0x315b1d39
- (void)_loadTrailersWithResolution:(id)resolution forURL:(id)url;	// 0x315b1ea9
- (void)_networkStatusChanged:(id)changed;	// 0x315b0d61
- (void)_postLoadedNotification:(id)notification;	// 0x315b3799
- (void)dealloc;	// 0x315ce8c1
- (int)errorCodeForProvider;	// 0x315ce849
// converted property getter: - (int)lastError;	// 0x315ce7fd
- (int)load;	// 0x315b0e85
- (id)machineID;	// 0x315b0e55
- (id)mediaForEntityName:(id)entityName;	// 0x315b30e5
- (id)mediaTypes;	// 0x315ce80d
- (id)providerID;	// 0x315b0e79
- (int)unload;	// 0x315ce931
@end

