#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnalyticsBlueprintLibrary* GetDefaultObj();

	void StartSessionWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes, bool* ReturnValue);
	void StartSession(bool* ReturnValue);
	class FString SetUserId();
	class FString SetSessionId();
	void SetLocation(class FString* Location);
	class FString SetGender();
	class FString SetBuildInfo();
	void SetAge(int32 Age);
	void RecordSimpleItemPurchaseWithAttributes(class FString* ItemID, int32 ItemQuantity, const TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordSimpleItemPurchase(class FString* ItemID, int32 ItemQuantity);
	int32 RecordSimpleCurrencyPurchaseWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes);
	int32 RecordSimpleCurrencyPurchase();
	TArray<class FString> RecordProgressWithFullHierarchyAndAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes);
	class FString RecordProgressWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes);
	class FString RecordProgress();
	int32 RecordItemPurchase(class FString* ItemID, int32 ItemQuantity);
	class FString RecordEventWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes);
	class FString RecordEventWithAttribute();
	class FString RecordEvent();
	class FString RecordErrorWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes);
	class FString RecordError();
	class FString RecordCurrencyPurchase();
	int32 RecordCurrencyGivenWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes);
	int32 RecordCurrencyGiven();
	class FString MakeEventAttribute(struct FAnalyticsEventAttr* ReturnValue);
	void GetUserId(class FString* ReturnValue);
	void GetSessionId(class FString* ReturnValue);
	void FlushEvents();
	void EndSession();
};

}


