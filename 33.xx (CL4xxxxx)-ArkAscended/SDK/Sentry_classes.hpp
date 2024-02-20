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
	uint8                                        Pad_11CB[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryAttachment* GetDefaultObj();

	class FString InitializeWithPath(class FString* Path, class FString* ContentType);
	class FString InitializeWithData(const TArray<uint8>& Data, class FString* ContentType);
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
	uint8                                        Pad_11F3[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryBreadcrumb* GetDefaultObj();

	void SetType(const class FString& Type);
	void SetMessage(class FString* Message);
	void SetLevel(enum class ESentryLevel Level);
	void SetData(TMap<class FString, class FString> Data);
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
	uint8                                        Pad_1203[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryEvent* GetDefaultObj();

	void SetMessage(class FString* Message);
	void SetLevel(enum class ESentryLevel Level);
	void GetMessage(const class FString& ReturnValue);
	void GetLevel(enum class ESentryLevel ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryId
class USentryId : public UObject
{
public:
	uint8                                        Pad_1207[0x10];                                    // Fixing Size Of Struct > TateDumper <

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

	void StringToBytesArray(const class FString& InString, const TArray<uint8>& ReturnValue);
	class FString SaveStringToFile(const class FString& InString, const class FString& ReturnValue);
	void CreateSentryUserFeedback(class USentryId** EventId, class FString* Name, const class FString& Email, class FString* Comments, class USentryUserFeedback* ReturnValue);
	void CreateSentryUser(const class FString& Email, class FString* ID, const class FString& Username, class FString* IpAddress, TMap<class FString, class FString> Data, class USentryUser* ReturnValue);
	void CreateSentryEvent(class FString* Message, enum class ESentryLevel Level, class USentryEvent* ReturnValue);
	void CreateSentryBreadcrumb(class FString* Message, const class FString& Type, class FString* Category, TMap<class FString, class FString> Data, enum class ESentryLevel Level, class USentryBreadcrumb* ReturnValue);
	class FString CreateSentryAttachmentWithPath(class FString* Path, class FString* ContentType, class USentryAttachment* ReturnValue);
	class FString CreateSentryAttachmentWithData(const TArray<uint8>& Data, class FString* ContentType, class USentryAttachment* ReturnValue);
	void ByteArrayToString(TArray<uint8>* Array, const class FString& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryScope
class USentryScope : public UObject
{
public:
	uint8                                        Pad_12A5[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryScope* GetDefaultObj();

	class FString SetTagValue(class FString* Value);
	void SetTags(TMap<class FString, class FString>* Tags);
	void SetLevel(enum class ESentryLevel Level);
	TArray<class FString> SetFingerprint();
	class FString SetExtraValue(class FString* Value);
	void SetExtras(TMap<class FString, class FString>* Extras);
	class FString SetEnvironment();
	void SetDist(class FString* Dist);
	TMap<class FString, class FString> SetContext();
	class FString RemoveTag();
	class FString RemoveExtra();
	class FString RemoveContext();
	class FString GetTagValue(const class FString& ReturnValue);
	void GetTags(TMap<class FString, class FString> ReturnValue);
	void GetLevel(enum class ESentryLevel ReturnValue);
	void GetFingerprint(const TArray<class FString>& ReturnValue);
	class FString GetExtraValue(const class FString& ReturnValue);
	void GetExtras(TMap<class FString, class FString> ReturnValue);
	void GetEnvironment(const class FString& ReturnValue);
	void GetDist(const class FString& ReturnValue);
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
	class FString                                DsnUrl;                                            // 0x28(0x10)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                Release;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst)
	class FString                                Environment;                                       // 0x48(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         InitAutomatically;                                 // 0x58(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         EnableVerboseLogging;                              // 0x59(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FAutomaticBreadcrumbs                 AutomaticBreadcrumbs;                              // 0x5A(0x5)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config)
	struct FTagsPromotion                        TagsPromotion;                                     // 0x5F(0x6)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config)
	bool                                         EnableAutoCrashCapturing;                          // 0x65(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         UploadSymbolsAutomatically;                        // 0x66(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_12B6[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProjectName;                                       // 0x68(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	class FString                                OrgName;                                           // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class FString                                AuthToken;                                         // 0x88(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient)
	bool                                         IncludeSources;                                    // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12BB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CrashReporterUrl;                                  // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class USentrySettings* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class Sentry.SentrySubsystem
class USentrySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_131F[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentrySubsystem* GetDefaultObj();

	void SetUser(class USentryUser** User);
	class FString SetTag(class FString* Value);
	void SetLevel(enum class ESentryLevel Level);
	TMap<class FString, class FString> SetContext();
	void RemoveUser();
	class FString RemoveTag();
	void InitializeWithSettings(FDelegateProperty_* OnConfigureSettings);
	void Initialize();
	void ConfigureScope(FDelegateProperty_* OnConfigureScope);
	void Close();
	void ClearBreadcrumbs();
	void CaptureUserFeedbackWithParams(class USentryId** EventId, const class FString& Email, class FString* Comments, class FString* Name);
	void CaptureUserFeedback(class USentryUserFeedback** UserFeedback);
	void CaptureMessageWithScope(class FString* Message, FDelegateProperty_* OnConfigureScope, enum class ESentryLevel Level, class USentryId* ReturnValue);
	void CaptureMessage(class FString* Message, enum class ESentryLevel Level, class USentryId* ReturnValue);
	void CaptureEventWithScope(class USentryEvent* Event, FDelegateProperty_* OnConfigureScope, class USentryId* ReturnValue);
	void CaptureEvent(class USentryEvent* Event, class USentryId* ReturnValue);
	void AddBreadcrumbWithParams(class FString* Message, class FString* Category, const class FString& Type, TMap<class FString, class FString> Data, enum class ESentryLevel Level);
	void AddBreadcrumb(class USentryBreadcrumb** Breadcrumb);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUser
class USentryUser : public UObject
{
public:
	uint8                                        Pad_135A[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryUser* GetDefaultObj();

	void SetUsername(const class FString& Username);
	void SetIpAddress(class FString* IpAddress);
	void SetId(class FString* ID);
	void SetEmail(const class FString& Email);
	void SetData(TMap<class FString, class FString> Data);
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
	uint8                                        Pad_1372[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USentryUserFeedback* GetDefaultObj();

	void SetName(class FString* Name);
	void SetEmail(const class FString& Email);
	void SetComment(class FString* Comments);
	void Initialize(class USentryId** EventId);
	void GetName(const class FString& ReturnValue);
	void GetEmail(const class FString& ReturnValue);
	void GetComment(const class FString& ReturnValue);
};

}


