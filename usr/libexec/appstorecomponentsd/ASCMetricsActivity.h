//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ASCMetricsActivity : NSObject
{
    NSDictionary *_fields;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001417f
+ (id)defaultFields;	// IMP=0x0010000000013f5f
- (void).cxx_destruct;	// IMP=0x0020000000014792
@property(readonly, copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
- (id)metricsActivityByRemovingValueForKey:(id)arg1;	// IMP=0x00100000000146d2
- (id)metricsActivityByMergingFields:(id)arg1 uniquingFieldsWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014605
- (id)metricsActivityWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000014531
- (id)description;	// IMP=0x0010000000014493
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001438d
- (unsigned long long)hash;	// IMP=0x0010000000014312
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000014307
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001428e
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000014187
- (id)init;	// IMP=0x0010000000014166
- (id)initWithFields:(id)arg1;	// IMP=0x0010000000014099

@end

