//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagementModel/RMModelStatusReason.h>

@interface RMModelStatusReason (Error)
+ (id)assetIsNotReferencedByConfiguration:(id)arg1;	// IMP=0x001000000005d78a
+ (id)configurationIsNotReferencedByAnActivation:(id)arg1;	// IMP=0x001000000005d5a3
+ (id)missingStateForDeclaration:(id)arg1;	// IMP=0x001000000005d2a4
+ (id)invalidPayloadForDeclaration:(id)arg1;	// IMP=0x001000000005cfa5
+ (id)missingConfigurationIdentifiers:(id)arg1 forActivation:(id)arg2;	// IMP=0x001000000005cd03
+ (id)missingAssetIdentifiers:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x001000000005ca61
+ (id)predicateEvaluationFailedWithError:(id)arg1 forActivation:(id)arg2;	// IMP=0x001000000005c3c4
+ (id)predicateEvaluatedToFalseForActivation:(id)arg1;	// IMP=0x001000000005c11f
+ (id)failedWithUnknownPayloadKeys:(id)arg1;	// IMP=0x001000000005c016
@end

