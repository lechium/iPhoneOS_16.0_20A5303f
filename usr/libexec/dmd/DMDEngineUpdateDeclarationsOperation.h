//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMFUpdateDeclarationsRequest;

@interface DMDEngineUpdateDeclarationsOperation
{
    DMFUpdateDeclarationsRequest *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004df5b
@property(retain, nonatomic) DMFUpdateDeclarationsRequest *request; // @synthesize request=_request;
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x001000000004cf74

@end

