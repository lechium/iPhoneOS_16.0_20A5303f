//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKConceptSelection;

__attribute__((visibility("hidden")))
@interface HKConceptQueryConfiguration : HKQueryServerConfiguration
{
    HKConceptSelection *_selection;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001c265c
- (void).cxx_destruct;	// IMP=0x00000000001c279e
@property(copy, nonatomic) HKConceptSelection *selection; // @synthesize selection=_selection;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c26ff
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c2664
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c25e5

@end

