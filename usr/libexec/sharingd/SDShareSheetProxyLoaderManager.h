//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, SDShareSheetProxyLoaderManagerDelegate;

@interface SDShareSheetProxyLoaderManager : NSObject
{
    NSString *_sessionIdentifier;	// 8 = 0x8
    id <SDShareSheetProxyLoaderManagerDelegate> _delegate;	// 16 = 0x10
    NSMutableArray *_loaders;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_loadingQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_publishingQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000170176
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *publishingQueue; // @synthesize publishingQueue=_publishingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue; // @synthesize loadingQueue=_loadingQueue;
@property(retain) NSMutableArray *loaders; // @synthesize loaders=_loaders;
@property(nonatomic) __weak id <SDShareSheetProxyLoaderManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void)proxyLoader:(id)arg1 didLoadProxiesWithResult:(id)arg2;	// IMP=0x001000000016fe09
- (void)_didFinishLoadingLoader:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x001000000016fc0c
- (void)_scheduleLoadingBlock:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2;	// IMP=0x001000000016fbf1
- (id)_existingLoaderForSectionType:(long long)arg1;	// IMP=0x001000000016fa3d
- (void)loadProxySection:(id)arg1;	// IMP=0x001000000016f7dc
- (id)initWithSessionIdentifier:(id)arg1;	// IMP=0x001000000016f6c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

