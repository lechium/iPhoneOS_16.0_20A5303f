//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultAllOfType
{
    int _modelClassNameOffset;	// 40 = 0x28
    NSString *_modelClassName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000054126
@property(readonly, nonatomic) NSString *modelClassName; // @synthesize modelClassName=_modelClassName;
@property(readonly, nonatomic) int modelClassNameOffset; // @synthesize modelClassNameOffset=_modelClassNameOffset;
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x000000000005403f
- (id)initWithLocalZone:(id)arg1 modelClassName:(id)arg2;	// IMP=0x0000000000053ec9

@end
