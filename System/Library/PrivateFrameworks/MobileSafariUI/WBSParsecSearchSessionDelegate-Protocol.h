//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSArray, NSString, WBSCompletionQuery;
@protocol WBSParsecSearchSession;

@protocol WBSParsecSearchSessionDelegate <NSObject>
- (void)session:(id <WBSParsecSearchSession>)arg1 didReceiveResults:(NSArray *)arg2 forQuery:(WBSCompletionQuery *)arg3;
- (void)currentKeyboardIdentifierWithLayoutsForSession:(id <WBSParsecSearchSession>)arg1 completionHandler:(void (^)(NSString *))arg2;
- (NSString *)currentInputTypeForSession:(id <WBSParsecSearchSession>)arg1;
@end

