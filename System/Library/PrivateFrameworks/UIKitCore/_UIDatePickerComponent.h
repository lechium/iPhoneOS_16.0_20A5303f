//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerComponent : NSObject
{
    unsigned long long _equivalentUnit;	// 8 = 0x8
    NSString *_formatString;	// 16 = 0x10
    unsigned long long _calendarUnit;	// 24 = 0x18
    double _width;	// 32 = 0x20
    struct _NSRange _unitRange;	// 40 = 0x28
}

+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(long long)arg3;	// IMP=0x0060000000dadb1e
+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2;	// IMP=0x0060000000dadb02
- (void).cxx_destruct;	// IMP=0x0000000000dae509
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) struct _NSRange unitRange; // @synthesize unitRange=_unitRange;
@property(readonly, nonatomic) unsigned long long calendarUnit; // @synthesize calendarUnit=_calendarUnit;
@property(readonly, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(readonly, nonatomic) unsigned long long equivalentUnit;
- (id)description;	// IMP=0x0000000000dae298
- (id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned long long)arg2;	// IMP=0x0000000000dae1fb

@end
