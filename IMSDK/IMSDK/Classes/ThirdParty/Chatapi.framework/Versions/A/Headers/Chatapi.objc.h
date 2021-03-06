// Objective-C API for talking to gitlab.33.cn/chat/chatcipher Go package.
//   gobind -lang=objc gitlab.33.cn/chat/chatcipher
//
// File is generated by gobind. Do not edit.

#ifndef __Chatapi_H__
#define __Chatapi_H__

@import Foundation;
#include "Universe.objc.h"


@class ChatapiHDWallet;

@interface ChatapiHDWallet : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
// skipped field HDWallet.CoinType with unsupported type: uint32

- (NSData*)rootSeed;
- (void)setRootSeed:(NSData*)v;
// skipped field HDWallet.MasterKey with unsupported type: *gitlab.33.cn/chat/chatcipher/bipwallet/bip32.Key

- (NSData*)newKeyPriv:(long)index error:(NSError**)error;
- (NSData*)newKeyPub:(long)index error:(NSError**)error;
@end

FOUNDATION_EXPORT NSString* const ChatapiTypeBitcoinString;
FOUNDATION_EXPORT NSString* const ChatapiTypeBtyString;
FOUNDATION_EXPORT NSString* const ChatapiTypeDcrString;
FOUNDATION_EXPORT NSString* const ChatapiTypeETHString;
FOUNDATION_EXPORT NSString* const ChatapiTypeEtherClassicString;
FOUNDATION_EXPORT NSString* const ChatapiTypeLitecoinString;
FOUNDATION_EXPORT NSString* const ChatapiTypeYccString;
FOUNDATION_EXPORT NSString* const ChatapiTypeZayedcoinString;

@interface Chatapi : NSObject
// skipped variable TypeTransfer with unsupported type: map[string]uint32

@end

FOUNDATION_EXPORT NSString* ChatapiByteTohex(NSData* d);

FOUNDATION_EXPORT NSString* ChatapiByteTostring(NSData* param);

FOUNDATION_EXPORT NSData* ChatapiChatSign(NSData* msg, NSData* privateKey);

FOUNDATION_EXPORT BOOL ChatapiCheckPasswd(NSString* encpasswd, NSString* passwdhash);

// skipped function CompressPubkey with unsupported parameter or return types


FOUNDATION_EXPORT NSData* ChatapiDecryptSymmetric(NSString* key, NSData* cyphertext, NSError** error);

FOUNDATION_EXPORT NSData* ChatapiDecryptWithDHKeyPair(NSString* privateKey, NSString* publicKey, NSData* cyphertext, NSError** error);

FOUNDATION_EXPORT NSData* ChatapiEncPasswd(NSString* orginpwd);

FOUNDATION_EXPORT NSData* ChatapiEncryptSymmetric(NSString* key, NSData* plaintext, NSError** error);

FOUNDATION_EXPORT NSData* ChatapiEncryptWithDHKeyPair(NSString* privateKey, NSString* publicKey, NSData* plaintext, NSError** error);

// skipped function FromECDSA with unsupported parameter or return types


FOUNDATION_EXPORT NSData* ChatapiGenerateDHSessionKey(NSString* privateKey, NSString* publicKey, NSError** error);

// skipped function GenerateKey with unsupported parameter or return types


/**
 * GenerateSymKey: generates a random symmetric key
 */
FOUNDATION_EXPORT NSString* ChatapiGenerateSymKey(NSError** error);

// skipped function HexToECDSA with unsupported parameter or return types


FOUNDATION_EXPORT NSData* ChatapiHexTobyte(NSString* param);

FOUNDATION_EXPORT NSString* ChatapiNewMnemonicString(long lang, long bitsize, NSError** error);

// skipped function NewWalletFromMnemonic with unsupported parameter or return types


FOUNDATION_EXPORT ChatapiHDWallet* ChatapiNewWalletFromMnemonic_v2(NSString* coinType, NSString* mnemonic, NSError** error);

// skipped function NewWalletFromSeed with unsupported parameter or return types


FOUNDATION_EXPORT NSString* ChatapiPasswdHash(NSData* encpasswd);

FOUNDATION_EXPORT NSString* ChatapiPublicKeyToAddress(NSData* pubKey);

FOUNDATION_EXPORT NSData* ChatapiSeedDecKey(NSData* password, NSData* seed, NSError** error);

FOUNDATION_EXPORT NSData* ChatapiSeedEncKey(NSData* password, NSData* seed, NSError** error);

FOUNDATION_EXPORT NSData* ChatapiStringTobyte(NSString* param, NSError** error);

#endif
