package tree_sitter_ipkg_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_ipkg "github.com/srghma/tree-sitter-ipkg/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ipkg.Language())
	if language == nil {
		t.Errorf("Error loading Ipkg grammar")
	}
}
