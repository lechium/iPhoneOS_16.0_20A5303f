//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriAudioInternal/NSObject-Protocol.h>

@class INAddMediaIntent;

@protocol INAddMediaIntentHandling <NSObject>
- (void)handleAddMedia:(INAddMediaIntent *)arg1 completion:(void (^)(INAddMediaIntentResponse *))arg2;

@optional
- (void)resolveMediaDestinationForAddMedia:(INAddMediaIntent *)arg1 withCompletion:(void (^)(INAddMediaMediaDestinationResolutionResult *))arg2;
- (void)resolveMediaItemsForAddMedia:(INAddMediaIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)confirmAddMedia:(INAddMediaIntent *)arg1 completion:(void (^)(INAddMediaIntentResponse *))arg2;
@end
