//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PAMediaConversionPhotoEditExporterMetadataConverter : NSObject
{
}

+ (void)install;	// IMP=0x00200000000170e1
- (_Bool)setPhotoFeatureFlags:(id)arg1 properties:(id)arg2 error:(id *)arg3;	// IMP=0x00200000000170ba
- (id)photoFeatureFlags:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000017039
- (_Bool)setPhotoProcessingFlags:(id)arg1 properties:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000017012
- (id)photoProcessingFlagsFromProperties:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016f91
- (_Bool)setImageVariation:(id)arg1 properties:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000016f6a
- (id)videoMetadataForVariation:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016f46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
