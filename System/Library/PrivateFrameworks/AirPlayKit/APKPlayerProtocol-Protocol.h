//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AirPlayKit/NSObject-Protocol.h>

@class APKKeyValueObserver, NSString;

@protocol APKPlayerProtocol <NSObject>
- (APKKeyValueObserver *)beginObserveringTimeControlStatusWithChangeHandler:(void (^)(void))arg1;
- (APKKeyValueObserver *)beginObserveringExternalPlaybackChangeWithChangeHandler:(void (^)(void))arg1;
- (_Bool)isExternalPlaybackActive;
@property(nonatomic, readonly) long long playerTimeControlStatus;
@property(nonatomic, readonly) NSString *outputDeviceID;

// Remaining properties
@property(nonatomic, readonly) _Bool externalPlaybackActive;
@end

