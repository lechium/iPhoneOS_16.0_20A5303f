//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CalClassAdditions)
+ (id)CalAutoCommentPrefix;	// IMP=0x005000000001763b
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;	// IMP=0x005000000001743f
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned long long)arg2;	// IMP=0x0050000000016c95
+ (id)ellipsisString;	// IMP=0x0050000000016aed
- (id)CalStringWithOnlyAutoComment;	// IMP=0x0010000000017834
- (id)CalStringByRemovingAutoComment;	// IMP=0x0010000000017796
- (_Bool)CalHasAutoCommentPrefix;	// IMP=0x00100000000176b4
- (id)stringByRemovingPrefixCaseInsensitive:(id)arg1;	// IMP=0x00100000000175a9
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x001000000000a5e6
- (id)stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x0010000000017590
- (id)stringByTrimmingWhitespaceAndRemovingNewlines;	// IMP=0x001000000000a533
- (id)CalSafeHFSPathComponentName;	// IMP=0x001000000001751e
- (id)appendSlashIfNeeded;	// IMP=0x0010000000006989
- (id)removeSlashIfNeeded;	// IMP=0x00100000000119ce
- (id)safeFilename;	// IMP=0x00100000000174b0
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;	// IMP=0x00100000000172ab
- (id)unquote;	// IMP=0x0010000000006760
- (id)quote;	// IMP=0x001000000000442a
- (id)trimWhiteSpace;	// IMP=0x00100000000043e2
- (id)trimCommas;	// IMP=0x001000000001725b
- (id)trimFirstComma;	// IMP=0x00100000000171f2
- (id)trimFinalComma;	// IMP=0x001000000001716a
- (id)trimChar:(unsigned short)arg1;	// IMP=0x001000000001710b
- (id)trimFirstChar:(unsigned short)arg1;	// IMP=0x00100000000170a0
- (id)trimFinalChar:(unsigned short)arg1;	// IMP=0x0010000000017016
- (_Bool)CalContainsSubstring:(id)arg1;	// IMP=0x0010000000016fee
- (_Bool)isPathToICalBookmark;	// IMP=0x0010000000016f7b
- (_Bool)isPathToBackupFile;	// IMP=0x0010000000016f06
- (_Bool)isPathToICalData;	// IMP=0x0010000000016e91
- (_Bool)isPathToVCalData;	// IMP=0x0010000000016db0
- (_Bool)isPathToAppleScript;	// IMP=0x0010000000016d3b
- (void)cal_enumerateCharactersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000016bb9
- (id)stringByDecodingSlashes;	// IMP=0x0010000000011a79
- (id)stringByEncodingSlashes;	// IMP=0x0010000000011a34
- (id)directionalityIsolatedString;	// IMP=0x0010000000016ac8
- (_Bool)isEqualAsURL:(id)arg1;	// IMP=0x00100000000068b4
- (id)CalAddressComment;	// IMP=0x0010000000016566
- (id)CalUncommentedAddress;	// IMP=0x0010000000016227
- (id)calDataDetectedURL;	// IMP=0x0010000000015fda
- (id)_phoneNumberDetector;	// IMP=0x0010000000015f6e
- (id)phoneURL;	// IMP=0x0010000000015c99
- (_Bool)isPhoneNumber;	// IMP=0x0010000000015a0d
- (id)radarLink;	// IMP=0x0010000000012ef9
- (_Bool)isMessagesURL;	// IMP=0x00100000000159f4
- (_Bool)isAddressBookURL;	// IMP=0x001000000000c20c
- (_Bool)isMailURL;	// IMP=0x001000000000c0a4
- (id)stringRemovingTel;	// IMP=0x0010000000015998
- (id)stringAddingTel;	// IMP=0x0010000000015946
- (_Bool)hasTel;	// IMP=0x001000000001592d
- (id)stringRemovingMailto;	// IMP=0x0010000000006858
- (id)stringAddingMailto;	// IMP=0x00100000000158db
- (id)hostFromEmail;	// IMP=0x0010000000015860
- (id)userFromEmail;	// IMP=0x00100000000157e3
- (_Bool)resemblesEmailAddress;	// IMP=0x001000000000cdbb
- (_Bool)hasMailto;	// IMP=0x0010000000006817
- (_Bool)isEqualToStringCaseInsensitive:(id)arg1;	// IMP=0x00100000000157c2
- (_Bool)containsCaseAndDiacriticInsensitive:(id)arg1;	// IMP=0x001000000001579a
- (_Bool)containsCaseInsensitive:(id)arg1;	// IMP=0x0010000000015772
- (_Bool)hasSuffixCaseInsensitive:(id)arg1;	// IMP=0x00100000000156dd
- (_Bool)hasPrefixCaseAndDiacriticInsensitive:(id)arg1;	// IMP=0x001000000000e28e
- (_Bool)hasPrefixCaseInsensitive:(id)arg1;	// IMP=0x0010000000006830
- (id)stringByRemovingLastPathComponent;	// IMP=0x0010000000015686
- (id)stringByURLUnescapingAllReservedCharacters;	// IMP=0x0010000000015674
- (id)stringByURLEscapingAllReservedCharacters;	// IMP=0x00100000000155a2
- (id)stringByURLQuotingPaths;	// IMP=0x001000000001553c
- (id)stringByURLQuoting;	// IMP=0x001000000001546a
- (id)stringByURLUnquoting;	// IMP=0x00100000000069e2
- (id)stringByExpandingTildeToNonSandboxHome;	// IMP=0x0010000000004a0c
@end

