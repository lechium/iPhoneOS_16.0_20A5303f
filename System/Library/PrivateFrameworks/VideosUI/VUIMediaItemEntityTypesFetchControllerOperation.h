//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VUIMediaItemEntityTypesFetchControllerResult, VUIMediaItemEntityTypesFetchResponse;

__attribute__((visibility("hidden")))
@interface VUIMediaItemEntityTypesFetchControllerOperation
{
    long long _fetchReason;	// 8 = 0x8
    VUIMediaItemEntityTypesFetchResponse *_currentFetchResponse;	// 16 = 0x10
    VUIMediaItemEntityTypesFetchControllerResult *_result;	// 24 = 0x18
}

+ (id)_changeSetFromMediaItemEntityTypes:(id)arg1 toMediaItemEntityTypes:(id)arg2;	// IMP=0x0060000000147bb3
- (void).cxx_destruct;	// IMP=0x0000000000147ccb
@property(retain, nonatomic) VUIMediaItemEntityTypesFetchControllerResult *result; // @synthesize result=_result;
@property(retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *currentFetchResponse; // @synthesize currentFetchResponse=_currentFetchResponse;
@property(nonatomic) long long fetchReason; // @synthesize fetchReason=_fetchReason;
- (void)executionDidBegin;	// IMP=0x00000000001477cd
- (id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2;	// IMP=0x0000000000147789
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000000014771a

@end
