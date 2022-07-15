//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class NSArray;
@protocol CNContactGroupPickerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactAddNewFieldAction : CNContactAction
{
    NSArray *_prohibitedPropertyKeys;	// 8 = 0x8
    id <CNContactGroupPickerDelegate> _groupPickerDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000062289
@property(nonatomic) __weak id <CNContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;
@property(retain, nonatomic) NSArray *prohibitedPropertyKeys; // @synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys;
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000062088

@end
