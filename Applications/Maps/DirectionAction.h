//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DirectionItem, GEOURLTimePoint, NSDictionary;

@interface DirectionAction
{
    DirectionItem *_directionItem;	// 8 = 0x8
    GEOURLTimePoint *_timePoint;	// 16 = 0x10
    unsigned long long _source;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000009c4f9c
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(retain, nonatomic) GEOURLTimePoint *timePoint; // @synthesize timePoint=_timePoint;
@property(retain, nonatomic) DirectionItem *directionItem; // @synthesize directionItem=_directionItem;
- (_Bool)isCompatibleWithRestorationTask;	// IMP=0x00100000009c4f28
- (_Bool)isCompatibleWithNavigation;	// IMP=0x00100000009c4eba
@property(readonly, nonatomic) NSDictionary *userInfo;
- (id)initWithDirectionItem:(id)arg1 timePoint:(id)arg2 source:(unsigned long long)arg3;	// IMP=0x00100000009c4ce6

@end

