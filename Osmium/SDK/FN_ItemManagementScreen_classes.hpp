#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemManagementScreen.ItemManagementScreen_C
// 0x0048 (0x04F8 - 0x04B0)
class UItemManagementScreen_C : public UFortItemManagementScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)
	class UCraftingBar_C*                              CraftingBar;                                              // 0x04B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox_Inventory;                                        // 0x04C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox_Screen;                                           // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               ItemDragEnabled;                                          // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	class UFortItemManagementItemTileButton*           SelectedTileButton;                                       // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UQuantitySelector_C*                         QuantitySelectorWidget;                                   // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               WarningShownReadOnlyWIFE;                                 // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	class USoundBase*                                  StorageTransferSound;                                     // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemManagementScreen.ItemManagementScreen_C");
		return ptr;
	}


	void GetShouldPrioritizeFavorites(bool* SortFavoritesSeparately);
	void TogglePrioritizeFavorites();
	void ToggleTileSize();
	void GuardActionForReadOnlyWIFE(bool* Proceed);
	void SizeScreen();
	void IsEquipAvailable(class UFortItem* Item, bool* EquipAvailable);
	void HandleMulchItemsCallback(int Quantity, class UFortItem* Item);
	void GetMaxTransferCount(class UFortItem* Item, int* Count);
	void CompleteItemDrop(class UFortItem* Item, int Quantity);
	void HandleDropItemsCallback(int Quantity, class UFortItem* Item);
	void HandleDrop(class UFortItem* Item);
	void CompleteItemTransfer(class UFortItem* Item, int Quantity);
	void HandleTransferItemsCallback(int Quantity, class UFortItem* Item);
	void CreateQuantitySelector(class UFortItem* Item, const struct FText& Title, const struct FText& ConfirmText, int InitialQuantity, int MaxQuantity);
	void HandleTransfer(class UFortItem* ItemToTransfer);
	void ShowCraftError(EFortCraftFailCause FailCause);
	void CraftAndSlot(class UFortSchematicItem* SchematicItem);
	void HandleEquip(class UFortItem* Item);
	void SizeInventoryPanel();
	bool OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void GetDescriptionText(struct FText* ItemDescription);
	void HandleInspect(class UFortItem* ItemToInspect);
	void HandleClose();
	void DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(EFortDialogResult Result, const struct FName& ResultName);
	void OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA();
	void DialogResult_CDD8108541BE3E4EA0F093B03D59650F(EFortDialogResult Result, const struct FName& ResultName);
	void HandleDifferentItemManagementModeSetBP();
	void HandleEquipItemBP(class UFortItem** Item);
	void HandleCraftItemBP(class UFortSchematicItem** SchematicItem);
	void DefaultActionRefresh();
	void OnActivated();
	void HandleConsumeItemBP(class UFortConsumableAccountItem** ConsumableItem);
	void HandleInspectItemBP(class UFortItem** Item);
	void HandleTransferItemBP(class UFortItem** Item);
	void HandleDropItemBP(class UFortItem** Item);
	void HandleMulchQuantitySelection(class UFortItem** Item);
	void ShowWarningReadOnlyWIFE(bool Force);
	void ExecuteUbergraph_ItemManagementScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
