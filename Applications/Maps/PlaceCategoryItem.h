//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchCategory;

@interface PlaceCategoryItem : NSObject
{
    int _displayMode;	// 8 = 0x8
    GEOSearchCategory *_searchCategory;	// 16 = 0x10
    unsigned long long _parentMuid;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000085efc2
@property(readonly, nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) unsigned long long parentMuid; // @synthesize parentMuid=_parentMuid;
@property(readonly, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
- (id)initWithSearchCategory:(id)arg1 parentMuid:(unsigned long long)arg2 displayMode:(int)arg3;	// IMP=0x001000000085ef24

@end
