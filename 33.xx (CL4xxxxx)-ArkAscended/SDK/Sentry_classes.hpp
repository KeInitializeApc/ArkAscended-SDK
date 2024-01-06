#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryAttachment
class USentryAttachment : public UObject
{
public:
	uint8                                        Pad_1766[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryAttachment* GetDefaultObj();

	class FString InitializeWithPath(const class FString& Path);
	class FString InitializeWithData();
	void GetPath(class FString* ReturnValue);
	void GetFilename(class FString* ReturnValue);
	void GetData(TArray<uint8>* ReturnValue);
	void GetContentType(class FString* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryBreadcrumb
class USentryBreadcrumb : public UObject
{
public:
	uint8                                        Pad_1796[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryBreadcrumb* GetDefaultObj();

	class FString SetType();
	void SetMessage(const class FString& Message);
	enum class ESentryLevel SetLevel();
	TMap<class FString, class FString> SetData();
	void SetCategory(class FString* Category);
	void GetType(class FString* ReturnValue);
	void GetMessage(class FString* ReturnValue);
	void GetLevel(enum class ESentryLevel* ReturnValue);
	void GetData(TMap<class FString, class FString>* ReturnValue);
	void GetCategory(class FString* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryEvent
class USentryEvent : public UObject
{
public:
	uint8                                        Pad_17AA[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryEvent* GetDefaultObj();

	void SetMessage(const class FString& Message);
	enum class ESentryLevel SetLevel();
	void GetMessage(class FString* ReturnValue);
	void GetLevel(enum class ESentryLevel* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryId
class USentryId : public UObject
{
public:
	uint8                                        Pad_17AF[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryId* GetDefaultObj();

	void ToString(class FString* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class Sentry.SentryLibrary
class USentryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USentryLibrary* GetDefaultObj();

	void StringToBytesArray(const class FString& InString, TArray<uint8>* ReturnValue);
	class FString SaveStringToFile(const class FString& InString, class FString* ReturnValue);
	class FString CreateSentryUserFeedback(class FString* Name, class USentryUserFeedback** ReturnValue);
	TMap<class FString, class FString> CreateSentryUser(class FString* ID, class USentryUser** ReturnValue);
	enum class ESentryLevel CreateSentryEvent(const class FString& Message, class USentryEvent** ReturnValue);
	enum class ESentryLevel CreateSentryBreadcrumb(const class FString& Message, class FString* Category, class USentryBreadcrumb** ReturnValue);
	class FString CreateSentryAttachmentWithPath(const class FString& Path, class USentryAttachment** ReturnValue);
	class FString CreateSentryAttachmentWithData(class USentryAttachment** ReturnValue);
	void ByteArrayToString(TArray<uint8>* Array, class FString* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryScope
class USentryScope : public UObject
{
public:
	uint8                                        Pad_186F[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryScope* GetDefaultObj();

	void SetTagValue(const class FString& Key, const class FString& Value);
	void SetTags(TMap<class FString, class FString>* Tags);
	enum class ESentryLevel SetLevel();
	void SetFingerprint(const TArray<class FString>& Fingerprint);
	void SetExtraValue(const class FString& Key, const class FString& Value);
	TMap<class FString, class FString> SetExtras();
	class FString SetEnvironment();
	class FString SetDist();
	TMap<class FString, class FString> SetContext(const class FString& Key);
	void RemoveTag(const class FString& Key);
	void RemoveExtra(const class FString& Key);
	void RemoveContext(const class FString& Key);
	void GetTagValue(const class FString& Key, class FString* ReturnValue);
	void GetTags(TMap<class FString, class FString>* ReturnValue);
	void GetLevel(enum class ESentryLevel* ReturnValue);
	void GetFingerprint(TArray<class FString>* ReturnValue);
	void GetExtraValue(const class FString& Key, class FString* ReturnValue);
	void GetExtras(TMap<class FString, class FString>* ReturnValue);
	void GetEnvironment(class FString* ReturnValue);
	void GetDist(class FString* ReturnValue);
	void ClearBreadcrumbs();
	void ClearAttachments();
	void Clear();
	class USentryBreadcrumb* AddBreadcrumb();
	class USentryAttachment* AddAttachment();
};

// 0x88 (0xB0 - 0x28)
// Class Sentry.SentrySettings
class USentrySettings : public UObject
{
public:
	class FString                                DsnUrl;                                            // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DuplicateTransient)
	class FString                                Release;                                           // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	class FString                                Environment;                                       // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         InitAutomatically;                                 // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableVerboseLogging;                              // 0x59(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FAutomaticBreadcrumbs                 AutomaticBreadcrumbs;                              // 0x5A(0x5)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config)
	struct FTagsPromotion                        TagsPromotion;                                     // 0x5F(0x6)(ConstParm, Net, DisableEditOnTemplate, Transient, Config)
	bool                                         EnableAutoCrashCapturing;                          // 0x65(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         UploadSymbolsAutomatically;                        // 0x66(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DuplicateTransient)
	uint8                                        Pad_1885[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProjectName;                                       // 0x68(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                OrgName;                                           // 0x78(0x10)(EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                AuthToken;                                         // 0x88(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient)
	bool                                         IncludeSources;                                    // 0x98(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1888[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CrashReporterUrl;                                  // 0xA0(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient)

	static class UClass* StaticClass();
	static class USentrySettings* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class Sentry.SentrySubsystem
class USentrySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_18F4[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentrySubsystem* GetDefaultObj();

	void SetUser(class USentryUser** User);
	void SetTag(const class FString& Key, const class FString& Value);
	enum class ESentryLevel SetLevel();
	TMap<class FString, class FString> SetContext(const class FString& Key);
	void RemoveUser();
	void RemoveTag(const class FString& Key);
	FDelegateProperty_ InitializeWithSettings();
	void Initialize();
	FDelegateProperty_ ConfigureScope();
	void Close();
	void ClearBreadcrumbs();
	class FString CaptureUserFeedbackWithParams(class FString* Name);
	class USentryUserFeedback* CaptureUserFeedback();
	enum class ESentryLevel CaptureMessageWithScope(const class FString& Message, class USentryId** ReturnValue);
	enum class ESentryLevel CaptureMessage(const class FString& Message, class USentryId** ReturnValue);
	FDelegateProperty_ CaptureEventWithScope(class USentryEvent** Event, class USentryId** ReturnValue);
	void CaptureEvent(class USentryEvent** Event, class USentryId** ReturnValue);
	enum class ESentryLevel AddBreadcrumbWithParams(const class FString& Message, class FString* Category);
	class USentryBreadcrumb* AddBreadcrumb();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUser
class USentryUser : public UObject
{
public:
	uint8                                        Pad_191D[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryUser* GetDefaultObj();

	class FString SetUsername();
	class FString SetIpAddress();
	void SetId(class FString* ID);
	class FString SetEmail();
	TMap<class FString, class FString> SetData();
	void GetUsername(class FString* ReturnValue);
	void GetIpAddress(class FString* ReturnValue);
	void GetId(class FString* ReturnValue);
	void GetEmail(class FString* ReturnValue);
	void GetData(TMap<class FString, class FString>* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUserFeedback
class USentryUserFeedback : public UObject
{
public:
	uint8                                        Pad_1938[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryUserFeedback* GetDefaultObj();

	void SetName(class FString* Name);
	class FString SetEmail();
	class FString SetComment();
	class USentryId* Initialize();
	void GetName(class FString* ReturnValue);
	void GetEmail(class FString* ReturnValue);
	void GetComment(class FString* ReturnValue);
};

}


