//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibraryTransientStateController;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibraryTransientStateController : NSObject
{
    MPModelLibraryTransientStateController *_underlyingLibraryTransientStateController;	// 8 = 0x8
}

+ (id)sharedLibraryTransientStateController;	// IMP=0x004000000000296d
- (void).cxx_destruct;	// IMP=0x0000000000003093
- (void)performOperation:(id)arg1;	// IMP=0x000000000000307d
- (void)performLibraryKeepLocalChangeWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002f47
- (void)performLibraryImportChangeWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002d8f
- (void)performDeleteEntityWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002ba5
- (void)performAddToPlaylistWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002b11
- (id)_initWithUnderlyingLibraryTransientStateController:(id)arg1;	// IMP=0x0000000000002aa6

@end
