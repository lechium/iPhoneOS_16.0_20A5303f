//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNSaveRequestVerifier : NSObject
{
}

+ (_Bool)_isEditingOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id *)arg4;	// IMP=0x008000000009c1dd
+ (_Bool)_arePropertiesOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id *)arg4;	// IMP=0x008000000009bed0
+ (_Bool)_areDirectPropertiesOfSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id *)arg3;	// IMP=0x008000000009bb5e
+ (_Bool)isSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id *)arg3;	// IMP=0x008000000009ba1b
+ (_Bool)isValidSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x008000000009b7a9
+ (id)insertedAndUpdatedContactsForSaveRequest:(id)arg1;	// IMP=0x008000000009b5dc

@end

