//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNPersonsModelFaceModel : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000016726e
+ (id)modelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x001000000016710c
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001670c8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001670c2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000167093
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000167064
- (id)faceCountsForAllPersons;	// IMP=0x0000000000167057
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;	// IMP=0x000000000016704a
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000167042
- (id)personUniqueIdentifiers;	// IMP=0x0000000000167035
- (unsigned long long)personCount;	// IMP=0x000000000016702d
- (unsigned long long)faceprintRequestRevision;	// IMP=0x0000000000167025
- (_Bool)isCompatibleWithConfiguration:(id)arg1;	// IMP=0x0000000000166fa0
- (id)personPredictionsForFace:(id)arg1 withDescriptor:(const void *)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000166f70

@end

