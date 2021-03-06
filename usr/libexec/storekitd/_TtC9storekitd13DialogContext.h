//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, MISSING_TYPE, NSString, NSURL;
@protocol SKDialogProtocol;

@interface _TtC9storekitd13DialogContext : NSObject
{
    MISSING_TYPE *bundleID;	// 8 = 0x8
    MISSING_TYPE *bundleURL;	// 0 = 0x0
    MISSING_TYPE *dialogObserver;	// 0 = 0x0
    MISSING_TYPE *processInfo;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000000a68a0
- (id)init;	// IMP=0x00100000000a6840
- (void)handleEngagementRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a6790
- (void)handleDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a6560
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a64c0
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a63f0
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a6320
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a6300
- (void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a6230
- (void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a6160
- (void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a6140
- (id)initWithBundleID:(id)arg1 bundleURL:(id)arg2 processInfo:(id)arg3 dialogObserver:(id)arg4;	// IMP=0x00100000000a55f0
@property(nonatomic, readonly) AMSProcessInfo *processInfo; // @synthesize processInfo;
@property(nonatomic, retain) id <SKDialogProtocol> dialogObserver; // @synthesize dialogObserver;
@property(nonatomic, readonly) NSURL *bundleURL;
@property(nonatomic, readonly) NSString *bundleID;

@end

