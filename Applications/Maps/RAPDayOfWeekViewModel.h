//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RAPDayOfWeekViewModel : NSObject
{
    int _dayEnum;	// 8 = 0x8
    NSString *_longSymbol;	// 16 = 0x10
    NSString *_shortSymbol;	// 24 = 0x18
    unsigned long long _semanticPosition;	// 32 = 0x20
}

+ (id)orderedWeekdaysForDayList:(id)arg1;	// IMP=0x0040000000b22fcd
+ (id)orderedWeekdays;	// IMP=0x0010000000b22d21
- (void).cxx_destruct;	// IMP=0x0020000000b231b7
@property(nonatomic) int dayEnum; // @synthesize dayEnum=_dayEnum;
@property(nonatomic) unsigned long long semanticPosition; // @synthesize semanticPosition=_semanticPosition;
@property(copy, nonatomic) NSString *shortSymbol; // @synthesize shortSymbol=_shortSymbol;
@property(copy, nonatomic) NSString *longSymbol; // @synthesize longSymbol=_longSymbol;

@end

