//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactFormatter, NSArray, _TtC10ContactsUI18DuplicatesUIHelper;

@protocol _TtP10ContactsUI26DuplicatesUIHelperDelegate_
- (void)didSelectIgnoreAllDuplicates:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1 signaturesIgnored:(NSArray *)arg2;
- (void)didSelectMergeAllDuplicates:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1 signaturesToMerge:(NSArray *)arg2;
@property(nonatomic, readonly) CNContactFormatter *contactFormatter;

@optional
- (void)didSelectCancelMergeDuplicates:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1;
- (void)didSelectSaveDuplicates:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1;
@end
