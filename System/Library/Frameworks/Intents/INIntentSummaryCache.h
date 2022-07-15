//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface INIntentSummaryCache : NSObject
{
    int _systemLanguageChangeNotificationToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_resourceAccessQueue;	// 16 = 0x10
    NSMutableDictionary *_allBundlesCache;	// 24 = 0x18
}

+ (id)sharedCache;	// IMP=0x00100000001c92b1
- (void).cxx_destruct;	// IMP=0x00000000001c9024
@property(readonly, nonatomic) int systemLanguageChangeNotificationToken; // @synthesize systemLanguageChangeNotificationToken=_systemLanguageChangeNotificationToken;
@property(readonly, nonatomic) NSMutableDictionary *allBundlesCache; // @synthesize allBundlesCache=_allBundlesCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue; // @synthesize resourceAccessQueue=_resourceAccessQueue;
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000000001c8e25
- (void)invalidateCacheForBundleId:(id)arg1;	// IMP=0x00000000001c8d31
- (void)invalidateCache;	// IMP=0x00000000001c8c77
- (void)stopObservingSystemLanguageChanges;	// IMP=0x00000000001c8c24
- (void)startObservingSystemLanguageChanges;	// IMP=0x00000000001c8b3e
- (void)stopObservingApplicationWorkspaceChanges;	// IMP=0x00000000001c8b04
- (void)startObservingApplicationWorkspaceChanges;	// IMP=0x00000000001c8ab1
- (void)stopAutomaticInvalidation;	// IMP=0x00000000001c8a83
- (void)startAutomaticInvalidation;	// IMP=0x00000000001c8a55
- (void)setSubtitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;	// IMP=0x00000000001c895c
- (void)setTitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;	// IMP=0x00000000001c8863
- (_Bool)getSubtitle:(id *)arg1 forIntent:(id)arg2 languageCode:(id)arg3;	// IMP=0x00000000001c8708
- (_Bool)getTitle:(id *)arg1 forIntent:(id)arg2 languageCode:(id)arg3;	// IMP=0x00000000001c85ad
- (id)cachedSummaryForIntent:(id)arg1 languageCode:(id)arg2 creatingIfNeeded:(_Bool)arg3;	// IMP=0x00000000001c8343
- (void)setBundleCache:(id)arg1 forBundleId:(id)arg2;	// IMP=0x00000000001c824f
- (id)bundleCacheForBundleId:(id)arg1;	// IMP=0x00000000001c80f7
- (void)dealloc;	// IMP=0x00000000001c80b9
- (id)init;	// IMP=0x00000000001c7ffc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
