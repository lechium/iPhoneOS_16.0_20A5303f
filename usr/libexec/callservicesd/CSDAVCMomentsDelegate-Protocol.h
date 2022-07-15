//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError, NSURL;
@protocol CSDAVCMoments, CSDAVCMomentsRequest;

@protocol CSDAVCMomentsDelegate <NSObject>
- (void)moments:(id <CSDAVCMoments>)arg1 didEndProcessingRequest:(id <CSDAVCMomentsRequest>)arg2 stillImageURL:(NSURL *)arg3 movieURL:(NSURL *)arg4 error:(NSError *)arg5;
- (void)moments:(id <CSDAVCMoments>)arg1 didStartProcessingRequest:(id <CSDAVCMomentsRequest>)arg2 error:(NSError *)arg3;
- (void)moments:(id <CSDAVCMoments>)arg1 didFinishRequest:(id <CSDAVCMomentsRequest>)arg2 error:(NSError *)arg3;
- (void)moments:(id <CSDAVCMoments>)arg1 capabilitiesDidChange:(unsigned int)arg2;

@optional
- (void)momentsServerDidDisconnect:(id <CSDAVCMoments>)arg1;
@end
