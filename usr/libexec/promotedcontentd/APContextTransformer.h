//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APContext, NSMutableDictionary, NSString;

@interface APContextTransformer : NSObject
{
    NSString *_contentIdentifier;	// 8 = 0x8
    APContext *_originalContext;	// 16 = 0x10
    NSMutableDictionary *_bodyContext;	// 24 = 0x18
    NSMutableDictionary *_headerContext;	// 32 = 0x20
    long long _placementType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000069175
@property long long placementType; // @synthesize placementType=_placementType;
@property(readonly) NSMutableDictionary *headerContext; // @synthesize headerContext=_headerContext;
@property(readonly) NSMutableDictionary *bodyContext; // @synthesize bodyContext=_bodyContext;
@property(readonly) APContext *originalContext; // @synthesize originalContext=_originalContext;
@property(readonly) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
- (id)transformedContext;	// IMP=0x0010000000068abf
- (void)_addAdjacentContext;	// IMP=0x0010000000068930
- (void)_addContext:(id)arg1;	// IMP=0x0010000000068544
- (void)_addCurrentArticleContext;	// IMP=0x0010000000068384
- (id)initWithContext:(id)arg1 contentIdentifier:(id)arg2 placementType:(long long)arg3;	// IMP=0x0010000000068283

@end

