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
	uint8                                        Pad_1625[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryAttachment* GetDefaultObj();

	class FString InitializeWithPath(const class FString& ContentType);
	class FString InitializeWithData(TArray<uint8>* Data, const class FString& ContentType);
	class FString GetPath();
	class FString GetFilename();
	TArray<uint8> GetData();
	class FString GetContentType();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryBreadcrumb
class USentryBreadcrumb : public UObject
{
public:
	uint8                                        Pad_16A7[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryBreadcrumb* GetDefaultObj();

	void SetType(const class FString& Type);
	void SetMessage(class FString* Message);
	enum class ESentryLevel SetLevel();
	void SetData(TMap<class FString, class FString>* Data);
	void SetCategory(class FString* Category);
	class FString GetType();
	class FString GetMessage();
	enum class ESentryLevel GetLevel();
	TMap<class FString, class FString> GetData();
	class FString GetCategory();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryEvent
class USentryEvent : public UObject
{
public:
	uint8                                        Pad_16D2[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryEvent* GetDefaultObj();

	void SetMessage(class FString* Message);
	enum class ESentryLevel SetLevel();
	class FString GetMessage();
	enum class ESentryLevel GetLevel();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryId
class USentryId : public UObject
{
public:
	uint8                                        Pad_16DA[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryId* GetDefaultObj();

	class FString ToString();
};

// 0x0 (0x28 - 0x28)
// Class Sentry.SentryLibrary
class USentryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USentryLibrary* GetDefaultObj();

	TArray<uint8> StringToBytesArray(class FString* InString);
	class FString SaveStringToFile(class FString* InString);
	class USentryUserFeedback* CreateSentryUserFeedback(class USentryId** EventId, class FString* Name, class FString* Comments);
	class USentryUser* CreateSentryUser(class FString* ID, class FString* IpAddress, TMap<class FString, class FString>* Data);
	class USentryEvent* CreateSentryEvent(class FString* Message);
	class USentryBreadcrumb* CreateSentryBreadcrumb(class FString* Message, const class FString& Type, class FString* Category, TMap<class FString, class FString>* Data);
	class USentryAttachment* CreateSentryAttachmentWithPath(const class FString& ContentType);
	class USentryAttachment* CreateSentryAttachmentWithData(TArray<uint8>* Data, const class FString& ContentType);
	class FString ByteArrayToString(TArray<uint8>* Array);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryScope
class USentryScope : public UObject
{
public:
	uint8                                        Pad_178A[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryScope* GetDefaultObj();

	void SetTagValue(const class FString& Key, class FString* Value);
	void SetTags(TMap<class FString, class FString>* Tags);
	enum class ESentryLevel SetLevel();
	TArray<class FString> SetFingerprint();
	void SetExtraValue(const class FString& Key, class FString* Value);
	void SetExtras(TMap<class FString, class FString>* Extras);
	void SetEnvironment(class FString* Environment);
	void SetDist(class FString* Dist);
	void SetContext(const class FString& Key, TMap<class FString, class FString> Values);
	void RemoveTag(const class FString& Key);
	void RemoveExtra(const class FString& Key);
	void RemoveContext(const class FString& Key);
	class FString GetTagValue(const class FString& Key);
	TMap<class FString, class FString> GetTags();
	enum class ESentryLevel GetLevel();
	TArray<class FString> GetFingerprint();
	class FString GetExtraValue(const class FString& Key);
	TMap<class FString, class FString> GetExtras();
	class FString GetEnvironment();
	class FString GetDist();
	void ClearBreadcrumbs();
	void ClearAttachments();
	void Clear();
	void AddBreadcrumb(class USentryBreadcrumb** Breadcrumb);
	void AddAttachment(class USentryAttachment** Attachment);
};

// 0x88 (0xB0 - 0x28)
// Class Sentry.SentrySettings
class USentrySettings : public UObject
{
public:
	class FString                                DsnUrl;                                            // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference)
	class FString                                Release;                                           // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	class FString                                Environment;                                       // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         InitAutomatically;                                 // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         EnableVerboseLogging;                              // 0x59(0x1)(Edit, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAutomaticBreadcrumbs                 AutomaticBreadcrumbs;                              // 0x5A(0x5)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
	struct FTagsPromotion                        TagsPromotion;                                     // 0x5F(0x6)(ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
	bool                                         EnableAutoCrashCapturing;                          // 0x65(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         UploadSymbolsAutomatically;                        // 0x66(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference)
	uint8                                        Pad_1793[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProjectName;                                       // 0x68(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	class FString                                OrgName;                                           // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                AuthToken;                                         // 0x88(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient)
	bool                                         IncludeSources;                                    // 0x98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1795[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CrashReporterUrl;                                  // 0xA0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference)

	static class UClass* StaticClass();
	static class USentrySettings* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class Sentry.SentrySubsystem
class USentrySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_17CE[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentrySubsystem* GetDefaultObj();

	void SetUser(class USentryUser** User);
	void SetTag(const class FString& Key, class FString* Value);
	enum class ESentryLevel SetLevel();
	void SetContext(const class FString& Key, TMap<class FString, class FString> Values);
	void RemoveUser();
	void RemoveTag(const class FString& Key);
	void InitializeWithSettings(FDelegateProperty_* OnConfigureSettings);
	void Initialize();
	void ConfigureScope(FDelegateProperty_* OnConfigureScope);
	void Close();
	void ClearBreadcrumbs();
	class FString CaptureUserFeedbackWithParams(class USentryId** EventId, class FString* Comments, class FString* Name);
	void CaptureUserFeedback(class USentryUserFeedback** UserFeedback);
	class USentryId* CaptureMessageWithScope(class FString* Message, FDelegateProperty_* OnConfigureScope);
	class USentryId* CaptureMessage(class FString* Message);
	class USentryId* CaptureEventWithScope(FDelegateProperty_* OnConfigureScope);
	class USentryId* CaptureEvent();
	enum class ESentryLevel AddBreadcrumbWithParams(class FString* Message, class FString* Category, const class FString& Type, TMap<class FString, class FString>* Data);
	void AddBreadcrumb(class USentryBreadcrumb** Breadcrumb);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUser
class USentryUser : public UObject
{
public:
	uint8                                        Pad_17F5[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryUser* GetDefaultObj();

	class FString SetUsername();
	void SetIpAddress(class FString* IpAddress);
	void SetId(class FString* ID);
	class FString SetEmail();
	void SetData(TMap<class FString, class FString>* Data);
	class FString GetUsername();
	class FString GetIpAddress();
	class FString GetId();
	class FString GetEmail();
	TMap<class FString, class FString> GetData();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUserFeedback
class USentryUserFeedback : public UObject
{
public:
	uint8                                        Pad_1800[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryUserFeedback* GetDefaultObj();

	void SetName(class FString* Name);
	class FString SetEmail();
	void SetComment(class FString* Comments);
	void Initialize(class USentryId** EventId);
	class FString GetName();
	class FString GetEmail();
	class FString GetComment();
};

}


