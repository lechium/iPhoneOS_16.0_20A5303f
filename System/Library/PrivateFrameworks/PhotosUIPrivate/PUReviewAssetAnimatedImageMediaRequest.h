//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUReviewAssetAnimatedImageMediaRequest : NSObject
{
    long long __animatedRequestID;	// 8 = 0x8
}

@property(readonly, nonatomic) long long _animatedRequestID; // @synthesize _animatedRequestID=__animatedRequestID;
- (void)cancelRequest;	// IMP=0x00000000003ee165
- (id)initWithAnimatedImageRequestID:(long long)arg1;	// IMP=0x00000000003ee128

@end

