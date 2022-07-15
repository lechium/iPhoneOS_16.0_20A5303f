//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, CNHealthStoreManager, NSString;

__attribute__((visibility("hidden")))
@interface CNMedicalIDAction
{
    long long _medicalIDActionType;	// 8 = 0x8
    CNHealthStoreManager *_healthStoreManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000083603
@property(retain, nonatomic) CNHealthStoreManager *healthStoreManager; // @synthesize healthStoreManager=_healthStoreManager;
@property(nonatomic) long long medicalIDActionType; // @synthesize medicalIDActionType=_medicalIDActionType;
- (void)medicalIDViewControllerDidFinish:(id)arg1;	// IMP=0x00000000000834f6
- (void)medicalIDViewControllerDidDelete:(id)arg1;	// IMP=0x00000000000833cb
- (void)medicalIDViewControllerDidSave:(id)arg1;	// IMP=0x0000000000083305
- (void)medicalIDViewControllerDidCancel:(id)arg1;	// IMP=0x000000000008323f
- (void)performActionWithSender:(id)arg1;	// IMP=0x000000000008303f

// Remaining properties
@property(retain, nonatomic) CNContact *contact; // @dynamic contact;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
