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
	uint8                                        Pad_1D79[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryAttachment* GetDefaultObj();

	class FString InitializeWithPath(const class FString& Path);
	class FString InitializeWithData();
	void GetPath(const class FString& ReturnValue);
	void GetFilename(const class FString& ReturnValue);
	void GetData(const TArray<uint8>& ReturnValue);
	void GetContentType(const class FString& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryBreadcrumb
class USentryBreadcrumb : public UObject
{
public:
	uint8                                        Pad_1D87[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryBreadcrumb* GetDefaultObj();

	class FString SetType();
	class FString SetMessage();
	enum class ESentryLevel SetLevel();
	TMap<class FString, class FString> SetData();
	void SetCategory(class FString* Category);
	void GetType(const class FString& ReturnValue);
	void GetMessage(const class FString& ReturnValue);
	void GetLevel(enum class ESentryLevel ReturnValue);
	void GetData(TMap<class FString, class FString> ReturnValue);
	void GetCategory(const class FString& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryEvent
class USentryEvent : public UObject
{
public:
	uint8                                        Pad_1D8F[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryEvent* GetDefaultObj();

	class FString SetMessage();
	enum class ESentryLevel SetLevel();
	void GetMessage(const class FString& ReturnValue);
	void GetLevel(enum class ESentryLevel ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryId
class USentryId : public UObject
{
public:
	uint8                                        Pad_1D91[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryId* GetDefaultObj();

	void ToString(const class FString& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class Sentry.SentryLibrary
class USentryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USentryLibrary* GetDefaultObj();

	class FString StringToBytesArray(const TArray<uint8>& ReturnValue);
	class FString SaveStringToFile(const class FString& ReturnValue);
	class FString CreateSentryUserFeedback(class FString* Name, class USentryUserFeedback* ReturnValue);
	TMap<class FString, class FString> CreateSentryUser(class FString* ID, class USentryUser* ReturnValue);
	enum class ESentryLevel CreateSentryEvent(class USentryEvent* ReturnValue);
	enum class ESentryLevel CreateSentryBreadcrumb(class FString* Category, class USentryBreadcrumb* ReturnValue);
	class FString CreateSentryAttachmentWithPath(const class FString& Path, class USentryAttachment* ReturnValue);
	class FString CreateSentryAttachmentWithData(class USentryAttachment* ReturnValue);
	void ByteArrayToString(TArray<uint8>* Array, const class FString& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryScope
class USentryScope : public UObject
{
public:
	uint8                                        Pad_1DF5[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryScope* GetDefaultObj();

	void SetTagValue(const class FString& Key, const class FString& Value);
	void SetTags(TMap<class FString, class FString>* Tags);
	enum class ESentryLevel SetLevel();
	void SetFingerprint(TArray<class FString>* Fingerprint);
	void SetExtraValue(const class FString& Key, const class FString& Value);
	TMap<class FString, class FString> SetExtras();
	class FString SetEnvironment();
	class FString SetDist();
	TMap<class FString, class FString> SetContext(const class FString& Key);
	void RemoveTag(const class FString& Key);
	void RemoveExtra(const class FString& Key);
	void RemoveContext(const class FString& Key);
	void GetTagValue(const class FString& Key, const class FString& ReturnValue);
	void GetTags(TMap<class FString, class FString> ReturnValue);
	void GetLevel(enum class ESentryLevel ReturnValue);
	void GetFingerprint(const TArray<class FString>& ReturnValue);
	void GetExtraValue(const class FString& Key, const class FString& ReturnValue);
	void GetExtras(TMap<class FString, class FString> ReturnValue);
	void GetEnvironment(const class FString& ReturnValue);
	void GetDist(const class FString& ReturnValue);
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
	class FString                                DsnUrl;                                            // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	class FString                                Release;                                           // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst)
	class FString                                Environment;                                       // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         InitAutomatically;                                 // 0x58(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableVerboseLogging;                              // 0x59(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FAutomaticBreadcrumbs                 AutomaticBreadcrumbs;                              // 0x5A(0x5)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config)
	struct FTagsPromotion                        TagsPromotion;                                     // 0x5F(0x6)(ConstParm, Net, DisableEditOnTemplate, Transient, Config)
	bool                                         EnableAutoCrashCapturing;                          // 0x65(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         UploadSymbolsAutomatically;                        // 0x66(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1E02[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProjectName;                                       // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                OrgName;                                           // 0x78(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                AuthToken;                                         // 0x88(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient)
	bool                                         IncludeSources;                                    // 0x98(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E05[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CrashReporterUrl;                                  // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USentrySettings* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class Sentry.SentrySubsystem
class USentrySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1E33[0x38];                                    // Fixing Size Of Struct > TateDumper <

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
	enum class ESentryLevel CaptureMessageWithScope(class USentryId* ReturnValue);
	enum class ESentryLevel CaptureMessage(class USentryId* ReturnValue);
	FDelegateProperty_ CaptureEventWithScope(class USentryId* ReturnValue);
	class USentryEvent* CaptureEvent(class USentryId* ReturnValue);
	enum class ESentryLevel AddBreadcrumbWithParams(class FString* Category);
	class USentryBreadcrumb* AddBreadcrumb();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUser
class USentryUser : public UObject
{
public:
	uint8                                        Pad_1E47[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryUser* GetDefaultObj();

	class FString SetUsername();
	class FString SetIpAddress();
	void SetId(class FString* ID);
	class FString SetEmail();
	TMap<class FString, class FString> SetData();
	void GetUsername(const class FString& ReturnValue);
	void GetIpAddress(const class FString& ReturnValue);
	void GetId(const class FString& ReturnValue);
	void GetEmail(const class FString& ReturnValue);
	void GetData(TMap<class FString, class FString> ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUserFeedback
class USentryUserFeedback : public UObject
{
public:
	uint8                                        Pad_1E53[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryUserFeedback* GetDefaultObj();

	void SetName(class FString* Name);
	class FString SetEmail();
	class FString SetComment();
	class USentryId* Initialize();
	void GetName(const class FString& ReturnValue);
	void GetEmail(const class FString& ReturnValue);
	void GetComment(const class FString& ReturnValue);
};

}


