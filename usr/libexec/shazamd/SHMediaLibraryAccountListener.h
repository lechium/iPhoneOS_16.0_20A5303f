//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SHMediaLibraryAccountListenerDelegate;

@interface SHMediaLibraryAccountListener : NSObject
{
    id <SHMediaLibraryAccountListenerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000025cff
@property(nonatomic) __weak id <SHMediaLibraryAccountListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentUserID;
- (void)fetchUserRecordIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025905
- (void)updateUserRecordWithAccountInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025893
- (void)fetchAccountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002581d
- (void)updateAccountInfo;	// IMP=0x0010000000025712
- (void)observeAccountChangedNotification;	// IMP=0x00100000000255ce
- (long long)libraryStatusForAccountStatus:(long long)arg1;	// IMP=0x00100000000255b4
- (void)fetchLibraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000252c4
- (id)init;	// IMP=0x0010000000025278

@end
