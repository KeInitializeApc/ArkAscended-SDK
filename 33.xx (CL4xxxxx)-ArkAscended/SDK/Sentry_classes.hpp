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
	uint8                                        Pad_2150[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryAttachment* GetDefaultObj();

	class FString InitializeWithPath(const class FString& Path, class FString* ContentType);
	class FString InitializeWithData(const TArray<uint8>& Data, class FString* ContentType);
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
	uint8                                        Pad_2155[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryBreadcrumb* GetDefaultObj();

	class FString SetType();
	class FString SetMessage();
	enum class ESentryLevel SetLevel();
	void SetData(TMap<class FString, class FString> Data);
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
	uint8                                        Pad_2157[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryEvent* GetDefaultObj();

	class FString SetMessage();
	enum class ESentryLevel SetLevel();
	class FString GetMessage();
	enum class ESentryLevel GetLevel();
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryId
class USentryId : public UObject
{
public:
	uint8                                        Pad_2158[0x10];                                    // Fixing Size Of Struct > TateDumper <

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

	TArray<uint8> StringToBytesArray();
	class FString SaveStringToFile();
	class USentryUserFeedback* CreateSentryUserFeedback(class USentryId** EventId, class FString* Name, const class FString& Email, class FString* Comments);
	class USentryUser* CreateSentryUser(const class FString& Email, class FString* ID, const class FString& Username, class FString* IpAddress, TMap<class FString, class FString> Data);
	class USentryEvent* CreateSentryEvent();
	class USentryBreadcrumb* CreateSentryBreadcrumb(class FString* Category, TMap<class FString, class FString> Data);
	class USentryAttachment* CreateSentryAttachmentWithPath(const class FString& Path, class FString* ContentType);
	class USentryAttachment* CreateSentryAttachmentWithData(const TArray<uint8>& Data, class FString* ContentType);
	class FString ByteArrayToString(TArray<uint8>* Array);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryScope
class USentryScope : public UObject
{
public:
	uint8                                        Pad_2192[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryScope* GetDefaultObj();

	void SetTagValue(const class FString& Key, const class FString& Value);
	void SetTags(TMap<class FString, class FString>* Tags);
	enum class ESentryLevel SetLevel();
	TArray<class FString> SetFingerprint();
	void SetExtraValue(const class FString& Key, const class FString& Value);
	void SetExtras(TMap<class FString, class FString>* Extras);
	void SetEnvironment(class FString* Environment);
	void SetDist(class FString* Dist);
	TMap<class FString, class FString> SetContext(const class FString& Key);
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
	class FString                                DsnUrl;                                            // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	class FString                                Release;                                           // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	class FString                                Environment;                                       // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         InitAutomatically;                                 // 0x58(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableVerboseLogging;                              // 0x59(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FAutomaticBreadcrumbs                 AutomaticBreadcrumbs;                              // 0x5A(0x5)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config)
	struct FTagsPromotion                        TagsPromotion;                                     // 0x5F(0x6)(ConstParm, Net, DisableEditOnTemplate, Transient, Config)
	bool                                         EnableAutoCrashCapturing;                          // 0x65(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         UploadSymbolsAutomatically;                        // 0x66(0x1)(Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	uint8                                        Pad_2196[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProjectName;                                       // 0x68(0x10)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                OrgName;                                           // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                AuthToken;                                         // 0x88(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient)
	bool                                         IncludeSources;                                    // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2197[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CrashReporterUrl;                                  // 0xA0(0x10)(Edit, ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)

	static class UClass* StaticClass();
	static class USentrySettings* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class Sentry.SentrySubsystem
class USentrySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_21B5[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentrySubsystem* GetDefaultObj();

	void SetUser(class USentryUser** User);
	void SetTag(const class FString& Key, const class FString& Value);
	enum class ESentryLevel SetLevel();
	TMap<class FString, class FString> SetContext(const class FString& Key);
	void RemoveUser();
	void RemoveTag(const class FString& Key);
	void InitializeWithSettings(FDelegateProperty_ OnConfigureSettings);
	void Initialize();
	void ConfigureScope(FDelegateProperty_* OnConfigureScope);
	void Close();
	void ClearBreadcrumbs();
	void CaptureUserFeedbackWithParams(class USentryId** EventId, const class FString& Email, class FString* Comments, class FString* Name);
	void CaptureUserFeedback(class USentryUserFeedback* UserFeedback);
	class USentryId* CaptureMessageWithScope(FDelegateProperty_* OnConfigureScope);
	class USentryId* CaptureMessage();
	class USentryId* CaptureEventWithScope(FDelegateProperty_* OnConfigureScope);
	class USentryId* CaptureEvent();
	enum class ESentryLevel AddBreadcrumbWithParams(class FString* Category, TMap<class FString, class FString> Data);
	void AddBreadcrumb(class USentryBreadcrumb** Breadcrumb);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUser
class USentryUser : public UObject
{
public:
	uint8                                        Pad_21C4[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryUser* GetDefaultObj();

	void SetUsername(const class FString& Username);
	void SetIpAddress(class FString* IpAddress);
	void SetId(class FString* ID);
	void SetEmail(const class FString& Email);
	void SetData(TMap<class FString, class FString> Data);
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
	uint8                                        Pad_21CB[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryUserFeedback* GetDefaultObj();

	void SetName(class FString* Name);
	void SetEmail(const class FString& Email);
	void SetComment(class FString* Comments);
	void Initialize(class USentryId** EventId);
	class FString GetName();
	class FString GetEmail();
	class FString GetComment();
};

}


