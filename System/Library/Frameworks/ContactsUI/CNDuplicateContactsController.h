//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFormatter, CNUIContactsEnvironment, _TtC10ContactsUI18DuplicatesUIHelper;
@protocol CNContactDataSource, CNDuplicateContactsControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNDuplicateContactsController : NSObject
{
    _Bool _isAlreadyFindingDuplicates;	// 8 = 0x8
    _Bool _isPerformingMerge;	// 9 = 0x9
    NSObject<CNContactDataSource> *_dataSource;	// 16 = 0x10
    id <CNDuplicateContactsControllerDelegate> _delegate;	// 24 = 0x18
    _TtC10ContactsUI18DuplicatesUIHelper *_duplicatesUIHelper;	// 32 = 0x20
    CNContactFormatter *_contactFormatter;	// 40 = 0x28
    CNUIContactsEnvironment *_environment;	// 48 = 0x30
    long long _newDuplicatesCount;	// 56 = 0x38
    long long _allDuplicatesCount;	// 64 = 0x40
    double _mergeCompletedAt;	// 72 = 0x48
}

+ (id)defaultContactFormatter;	// IMP=0x0010000000237893
+ (id)defaultContactFormatterForDataSource:(id)arg1;	// IMP=0x0010000000237802
+ (id)os_log;	// IMP=0x00100000002377d2
- (void).cxx_destruct;	// IMP=0x0000000000237353
@property(nonatomic) double mergeCompletedAt; // @synthesize mergeCompletedAt=_mergeCompletedAt;
@property(nonatomic) _Bool isPerformingMerge; // @synthesize isPerformingMerge=_isPerformingMerge;
@property(nonatomic) _Bool isAlreadyFindingDuplicates; // @synthesize isAlreadyFindingDuplicates=_isAlreadyFindingDuplicates;
@property(nonatomic) long long allDuplicatesCount; // @synthesize allDuplicatesCount=_allDuplicatesCount;
@property(nonatomic) long long newDuplicatesCount; // @synthesize newDuplicatesCount=_newDuplicatesCount;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) _TtC10ContactsUI18DuplicatesUIHelper *duplicatesUIHelper; // @synthesize duplicatesUIHelper=_duplicatesUIHelper;
@property(nonatomic) __weak id <CNDuplicateContactsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<CNContactDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (void)didSelectSaveDuplicates:(id)arg1;	// IMP=0x0000000000237271
- (void)didSelectIgnoreAllDuplicates:(id)arg1 signaturesIgnored:(id)arg2;	// IMP=0x000000000023725f
- (void)didSelectMergeAllDuplicates:(id)arg1 signaturesToMerge:(id)arg2;	// IMP=0x000000000023724a
- (void)didPerformDuplicatesMerge;	// IMP=0x00000000002371c6
- (void)willPerformDuplicatesMerge;	// IMP=0x0000000000237142
- (void)duplicatesDidChange;	// IMP=0x00000000002370be
- (void)performIgnoreAll;	// IMP=0x000000000023709e
- (void)performMerge:(id)arg1;	// IMP=0x0000000000236f3e
- (void)decorateBannerViewCell:(id)arg1;	// IMP=0x0000000000236eb7
- (void)presentDuplicatesUIFailureAlertForController:(id)arg1;	// IMP=0x0000000000236d53
- (void)presentSheetBasedMergeForController:(id)arg1 showsIgnored:(_Bool)arg2;	// IMP=0x0000000000236cb3
- (_Bool)isInMergeCooldown:(long long)arg1;	// IMP=0x0000000000236c24
- (_Bool)canMergeDuplicates;	// IMP=0x0000000000236bed
- (_Bool)hasNewDuplicates;	// IMP=0x0000000000236bd4
- (_Bool)wantsToDisplayNewDuplicatesBanner:(long long)arg1;	// IMP=0x0000000000236b98
- (_Bool)isBusy;	// IMP=0x0000000000236b83
- (void)updateDuplicatesCounts;	// IMP=0x0000000000236af1
- (void)refreshManagedDuplicates;	// IMP=0x0000000000236a9b
- (void)findDuplicates;	// IMP=0x000000000023699a
- (void)resetDuplicates;	// IMP=0x0000000000236980
- (id)contactStore;	// IMP=0x00000000002368f0
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000236716

@end

