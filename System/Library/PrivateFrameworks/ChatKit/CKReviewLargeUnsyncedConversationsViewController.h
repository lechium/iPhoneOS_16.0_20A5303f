//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKReviewLargeUnsyncedConversationsViewController
{
    NSArray *_conversations;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x00600000000051d9
- (void).cxx_destruct;	// IMP=0x0000000000005a1a
@property(retain, nonatomic) NSArray *conversations; // @synthesize conversations=_conversations;
- (void)_populateConversationsIfNeeded;	// IMP=0x00000000000056dc
- (void)didSelectModelObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000005504
- (void)deleteModelObjectAndUnderlyingData:(id)arg1;	// IMP=0x00000000000053e4
- (id)modelObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000005375
- (unsigned long long)numberOfModelObjects;	// IMP=0x0000000000005321
- (void)reloadModelData;	// IMP=0x000000000000530d
- (Class)tableViewCellClass;	// IMP=0x00000000000052fc
- (id)tableViewCellReuseIdentifier;	// IMP=0x00000000000052ef
- (id)navigationBarTitle;	// IMP=0x0000000000005271

@end
