//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact;

__attribute__((visibility("hidden")))
@interface CNContactListSetMyCardAction
{
    CNContact *_originalMeContact;	// 8 = 0x8
}

+ (id)log;	// IMP=0x0060000000167bc3
- (void).cxx_destruct;	// IMP=0x0000000000168457
@property(retain, nonatomic) CNContact *originalMeContact; // @synthesize originalMeContact=_originalMeContact;
- (void)performUndoAction;	// IMP=0x00000000001683aa
- (void)updateMeContact:(id)arg1;	// IMP=0x0000000000168255
- (void)fetchOriginalMeContact;	// IMP=0x00000000001680ed
- (void)performAction;	// IMP=0x0000000000167d3b
- (id)updatedMeContact;	// IMP=0x0000000000167ceb
- (id)initWithContact:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000167c1f

@end
