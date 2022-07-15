//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableRLEArray, NSStorage, NSTextRange;
@protocol NSTextLocation, __NSTextRunStorageDataSource;

__attribute__((visibility("hidden")))
@interface _NSTextRunStorage : NSObject
{
    id <__NSTextRunStorageDataSource> _dataSource;	// 8 = 0x8
    NSMutableRLEArray *_RLEArray;	// 16 = 0x10
    NSStorage *_elements;	// 24 = 0x18
    NSTextRange *_seedRange;	// 32 = 0x20
    long long _seedElementIndex;	// 40 = 0x28
    _Bool _isCountable;	// 48 = 0x30
    _Bool _hasBaseLocation;	// 49 = 0x31
    _Bool _mapsLocationOffset;	// 50 = 0x32
    id <NSTextLocation> _baseLocation;	// 56 = 0x38
}

@property(readonly) id <__NSTextRunStorageDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)invalidateElementsInRange:(id)arg1 delta:(long long)arg2;	// IMP=0x00000000000bbc13
- (void)setObject:(id)arg1 forRange:(id)arg2;	// IMP=0x00000000000bb516
- (id)enumerateObjectsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bac6e
@property(readonly) long long baseIndex;
@property(readonly) id <NSTextLocation> baseLocation;
- (id)description;	// IMP=0x00000000000ba683
- (void)dealloc;	// IMP=0x00000000000ba628
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000000ba527

@end
