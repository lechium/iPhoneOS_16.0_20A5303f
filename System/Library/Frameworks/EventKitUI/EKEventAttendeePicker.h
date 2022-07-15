//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNAutocompleteFetchContext, CNAutocompleteResultsTableViewController, CNAutocompleteSearchManager, CNComposeRecipient, CNComposeRecipientTextView, EKEvent, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString, UIKeyboard, UIScrollView, UITableView;
@protocol EKEventAttendeePickerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventAttendeePicker : UIViewController
{
    NSArray *_recipients;	// 8 = 0x8
    CNComposeRecipientTextView *_composeRecipientView;	// 16 = 0x10
    UIScrollView *_recipientScrollView;	// 24 = 0x18
    UITableView *_searchResultsView;	// 32 = 0x20
    _Bool _showingSearchField;	// 40 = 0x28
    UIKeyboard *_keyboard;	// 48 = 0x30
    NSNumber *_lastSearchId;	// 56 = 0x38
    _Bool _ABAccessDenied;	// 64 = 0x40
    _Bool _shouldReenableAutomaticKeyboard;	// 65 = 0x41
    struct CGRect _initialFrame;	// 72 = 0x48
    NSOperationQueue *_availabilityQueue;	// 104 = 0x68
    NSMutableDictionary *_recipientAddressesToRecipients;	// 112 = 0x70
    EKEvent *_event;	// 120 = 0x78
    NSMutableDictionary *_atomPresentationOptionsByRecipient;	// 128 = 0x80
    _Bool _suppressAvailabilityRequests;	// 136 = 0x88
    NSDate *_overriddenEventStartDate;	// 144 = 0x90
    NSDate *_overriddenEventEndDate;	// 152 = 0x98
    CNAutocompleteSearchManager *_searchManager;	// 160 = 0xa0
    NSMutableArray *_searchResults;	// 168 = 0xa8
    CNAutocompleteResultsTableViewController *_autocompleteTableViewController;	// 176 = 0xb0
    CNAutocompleteFetchContext *_fetchContext;	// 184 = 0xb8
    CNComposeRecipient *_displayedRecipient;	// 192 = 0xc0
    _Bool _hasChanges;	// 200 = 0xc8
    NSString *_searchAccountID;	// 208 = 0xd0
    id <EKEventAttendeePickerDelegate> _addressValidationDelegate;	// 216 = 0xd8
}

+ (_Bool)_participantHasResponded:(id)arg1;	// IMP=0x001000000019e107
+ (id)_addressForRecipient:(id)arg1;	// IMP=0x001000000019dfd0
- (void).cxx_destruct;	// IMP=0x00000000001a1589
@property(nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
@property(nonatomic) __weak id <EKEventAttendeePickerDelegate> addressValidationDelegate; // @synthesize addressValidationDelegate=_addressValidationDelegate;
@property(copy, nonatomic) NSString *searchAccountID; // @synthesize searchAccountID=_searchAccountID;
- (Class)_CNContactPickerViewController;	// IMP=0x00000000001a1504
- (Class)_CNContactViewController;	// IMP=0x00000000001a14ee
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;	// IMP=0x00000000001a120e
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x00000000001a0f2f
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00000000001a0f12
- (void)contactViewControllerDidExecuteClearRecentsDataAction:(id)arg1;	// IMP=0x00000000001a0e84
- (void)_updateFetchContextChosenAddresses;	// IMP=0x00000000001a0e25
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001a0d4a
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;	// IMP=0x00000000001a08cf
- (_Bool)chooseSelectedSearchResultForComposeRecipientView:(id)arg1 context:(unsigned long long)arg2;	// IMP=0x00000000001a08b2
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;	// IMP=0x00000000001a0895
- (_Bool)collapseSelectedSearchResultForComposeRecipientView:(id)arg1;	// IMP=0x00000000001a0878
- (_Bool)expandSelectedSearchResultForComposeRecipientView:(id)arg1;	// IMP=0x00000000001a085b
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;	// IMP=0x00000000001a083e
- (_Bool)composeRecipientViewShowingSearchResults:(id)arg1;	// IMP=0x00000000001a082e
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;	// IMP=0x00000000001a05bc
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;	// IMP=0x00000000001a05b4
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;	// IMP=0x00000000001a048f
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;	// IMP=0x00000000001a0428
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;	// IMP=0x00000000001a0247
@property(readonly, nonatomic) _Bool showAvailability;
- (id)peoplePickerPrompt;	// IMP=0x00000000001a014f
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000000001a00f2
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x000000000019ff80
- (void)_adjustLayoutOfSubviews;	// IMP=0x000000000019fa9c
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;	// IMP=0x000000000019fa13
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;	// IMP=0x000000000019f9df
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;	// IMP=0x000000000019f909
- (void)searchForCorecipients;	// IMP=0x000000000019f740
- (void)searchWithText:(id)arg1;	// IMP=0x000000000019f578
- (void)_refreshSearchResults;	// IMP=0x000000000019f46e
- (void)finishedTaskWithID:(id)arg1;	// IMP=0x000000000019f384
- (void)finishedSearchingForCorecipients;	// IMP=0x000000000019f1e6
- (void)finishedSearchingForAutocompleteResults;	// IMP=0x000000000019f048
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;	// IMP=0x000000000019ee17
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;	// IMP=0x000000000019ebe6
- (id)_searchManager;	// IMP=0x000000000019ea30
- (void)scrollComposeViewToEnd;	// IMP=0x000000000019e973
- (_Bool)_zeroKeyworkSearchEnabled;	// IMP=0x000000000019e8bb
- (double)_maxScrollerHeight;	// IMP=0x000000000019e79d
- (void)_showSearchResultsView;	// IMP=0x000000000019e624
- (void)_hideSearchResultsViewAndCancelOutstandingSearches:(_Bool)arg1;	// IMP=0x000000000019e48f
- (id)_searchResultsView;	// IMP=0x000000000019e347
- (void)_copyRecipientsFromComposeView;	// IMP=0x000000000019e2dc
- (void)_setAtomPresentationOption:(unsigned long long)arg1 forRecipient:(id)arg2;	// IMP=0x000000000019e14e
- (void)_requestAvailabilityForRecipients:(id)arg1;	// IMP=0x000000000019cfd6
- (id)_lookUpRecipientForAddress:(id)arg1;	// IMP=0x000000000019cf35
- (void)_setRecipientsOnComposeView;	// IMP=0x000000000019cb87
@property(copy, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) NSArray *addresses;
@property(readonly, nonatomic) NSString *remainingText;
- (void)commitRemainingText;	// IMP=0x000000000019ca7d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000019ca35
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000019c9e2
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x000000000019c9a1
- (void)viewLayoutMarginsDidChange;	// IMP=0x000000000019c8fa
- (void)viewDidLoad;	// IMP=0x000000000019c8b1
- (void)loadView;	// IMP=0x000000000019c2c8
- (void)dealloc;	// IMP=0x000000000019c238
- (id)initWithFrame:(struct CGRect)arg1 event:(id)arg2 calendar:(id)arg3 overriddenEventStartDate:(id)arg4 overriddenEventEndDate:(id)arg5;	// IMP=0x000000000019be5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
